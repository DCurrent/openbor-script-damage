#include "data/scripts/dc_damage/config.h"

#import "data/scripts/dc_damage/config.c"
#import "data/scripts/dc_damage/toss.c"
#import "data/scripts/dc_damage/direction.c"

// Caskey, Damon V.
// 2018-11-13
//
// Apply damage to entity.
void dc_damage_apply_damage()
{
	void ent;
	void other;

	int force;
	int drop;
	int type;
	int fall;


	// Entities.
	ent = dc_damage_get_entity();
	other = dc_damage_get_other();

	// Attack attributes.
	force = dc_damage_get_hp_force();
	drop = dc_damage_get_drop_force();
	type = dc_damage_get_attack_type();

	// Apply the damage.
	damageentity(ent, other, force, drop, type);	

	// Adjust direction on hit.
	dc_damage_apply_direction_adjust();

	// If damage knocked target down, openBOR
	// has already applied its default velocity,
	// which we can't control with damageentity()
	// function. So we'll re-toss the entity with
	// our own here.
	fall = getentityproperty(ent, "aiflag", "falling");

	if (fall)
	{
		dc_damage_toss();
	}
}



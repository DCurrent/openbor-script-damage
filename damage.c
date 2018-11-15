#include "data/scripts/dc_damage/config.h"

#import "data/scripts/dc_damage/config.c"
#import "data/scripts/dc_damage/direction.c"
#import "data/scripts/dc_damage/toss.c"

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
	int dol_force;
	int projectile;


	// Entities.
	ent = dc_damage_get_entity();
	other = dc_damage_get_other();

	// Attack attributes.
	force = dc_damage_get_damage_force();
	drop = dc_damage_get_drop_force();
	type = dc_damage_get_attack_type();

	damageentity(ent, other, force, drop, type);	

	// Damge on land / projectile properties.
	dol_force = dc_damage_get_damage_on_landing_force();
	projectile = dc_damage_get_projectile();

	changeentityproperty(ent, "damage_on_landing", dol_force);
	changeentityproperty(ent, "projectile", projectile);
	//changeentityproperty(ent, "attacking", 1);

	// Adjust direction as needed.
	dc_damage_apply_direction_adjust();

	// If damage knocked target down, openBOR
	// has already applied its default velocity,
	// which we can't control with damageentity()
	// function. So we'll re-toss the entity with
	// our own here.
	fall = getentityproperty(ent, "aiflag", "falling");

	if (fall)
	{
		dc_damage_apply_toss();
	}

	
}

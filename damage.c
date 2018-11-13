#include "data/scripts/dc_damage/config.h"

#import "data/scripts/dc_damage/config.c"

// Caskey, Damon V.
//
// Apply damage to entity.
void dc_damage_apply_damage()
{
	void ent;
	void other;

	int force;
	int drop;
	int type;

	// Entities.
	ent = dc_damage_get_entity();
	other = dc_damage_get_other();

	// Attack attributes.
	force = dc_damage_get_hp_force();
	drop = dc_damage_get_drop_force();
	type = dc_damage_get_attack_type();

	damageentity(ent, other, force, drop, type);
}


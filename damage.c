#include "data/scripts/dc_damage/config.h"

#import "data/scripts/dc_damage/config.c"

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

	damageentity(ent, other, force, drop, type);	

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

// Caskey, Damon V.
// 2018-11-13
//
// Apply toss effect.
void dc_damage_toss()
{
	void ent;
	float vel_x;
	float vel_y;
	float vel_z;
	int drop;

	ent = dc_damage_get_entity();

	vel_x = dc_damage_get_drop_velocity_x();
	vel_y = dc_damage_get_drop_velocity_y();
	vel_z = dc_damage_get_drop_velocity_z();

	tossentity(ent, vel_y, vel_x, vel_z);
}

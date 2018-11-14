#include "data/scripts/dc_damage/config.h"

#import "data/scripts/dc_damage/config.c"

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
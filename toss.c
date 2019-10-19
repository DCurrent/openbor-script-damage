#include "data/scripts/dc_damage/config.h"

<<<<<<< HEAD
#import "data/scripts/dc_damage/config.c"
=======
#import "data/scripts/dc_damage/entity.c"
>>>>>>> 14e84180146fe947a77689ebce04bf4b97cdcfcc
#import "data/scripts/dc_damage/instance.c"
#import "data/scripts/dc_damage/velocity.c"

// Determine if X velocity should be inverted
// based on direction of entity.
float dc_damage_find_velocity_x()
{
	void ent;
	int direction;
	float vel_x;

	// Get entity and velocity setting.
	ent = dc_damage_get_entity();
	vel_x = dc_damage_get_drop_velocity_x();

	// If direction is right, reverse X velocity.
	direction = getentityproperty(ent, "direction");

	if (direction == openborconstant("DIRECTION_RIGHT"))
	{
		vel_x = -vel_x;
	}

	return vel_x;
}

// Caskey, Damon V.
// 2018-11-13
//
// Apply toss effect.
void dc_damage_apply_toss()
{
	void ent;
	float vel_x;
	float vel_y;
	float vel_z;
	int drop;

	ent = dc_damage_get_entity();

	vel_x = dc_damage_find_velocity_x();
	vel_y = dc_damage_get_drop_velocity_y();
	vel_z = dc_damage_get_drop_velocity_z();
	
	tossentity(ent, vel_y, vel_x, vel_z);
}
#include "data/scripts/dc_damage/config.h"

#include "data/scripts/dc_damage/instance.c"

// Damage on landing force to apply.
int dc_damage_get_damage_on_landing_force()
{
	int instance;
	int result;

	// Get instance.
	instance = dc_damage_get_instance();

	result = getlocalvar(instance + DC_DAMAGE_MEMBER_DOL_FORCE);

	if (typeof(result) != openborconstant("VT_INTEGER"))
	{
		result = DC_DAMAGE_DEFAULT_DOL_FORCE;
	}

	return result;
}

void dc_damage_set_damage_on_landing_force(int value)
{
	int instance;

	// Get instance.
	instance = dc_damage_get_instance();

	setlocalvar(instance + DC_DAMAGE_MEMBER_DOL_FORCE, value);
}







// Force (amount of hitpoint damage) to apply.
int dc_damage_get_damage_force()
{
	int instance;
	int result;

	// Get instance.
	instance = dc_damage_get_instance();

	result = getlocalvar(instance + DC_DAMAGE_MEMBER_FORCE);

	if (typeof(result) != openborconstant("VT_INTEGER"))
	{
		result = DC_DAMAGE_DEFAULT_FORCE;
	}

	return result;
}

void dc_damage_set_damage_force(int value)
{
	int instance;

	// Get instance.
	instance = dc_damage_get_instance();

	setlocalvar(instance + DC_DAMAGE_MEMBER_FORCE, value);
}



// Projectile mode to apply.
int dc_damage_get_projectile()
{
	char id;
	int result;
	
	// Get id.
	id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_PROJECTILE;
	
	result = getlocalvar(id);

	if (typeof(result) != openborconstant("VT_INTEGER"))
	{
		result = DC_DAMAGE_DEFAULT_PROJECTILE;
	}

	return result;
}

void dc_damage_set_projectile(int value)
{
	char id;

	// Get id.
	id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_PROJECTILE;

	if (value == DC_DAMAGE_DEFAULT_PROJECTILE)
	{
		value = NULL();
	}

	setlocalvar(id, value);
}


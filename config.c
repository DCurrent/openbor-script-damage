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





// Base entity functions will act on.
void dc_damage_get_entity()
{
	int instance;
	void result;

	// Get instance.
	instance = dc_damage_get_instance();

	result = getlocalvar(instance + DC_DAMAGE_MEMBER_ENT);

	if (typeof(result) != openborconstant("VT_PTR"))
	{
		result = DC_DAMAGE_DEFAULT_ENT;
	}

	return result;
}

void dc_damage_set_entity(void value)
{
	int instance;

	// Get instance.
	instance = dc_damage_get_instance();

	setlocalvar(instance + DC_DAMAGE_MEMBER_ENT, value);
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

// Entity given credit for damage.
void dc_damage_get_other()
{
	int instance;
	void result;

	// Get instance.
	instance = dc_damage_get_instance();

	result = getlocalvar(instance + DC_DAMAGE_MEMBER_OTHER);

	if (typeof(result) != openborconstant("VT_PTR"))
	{
		result = DC_DAMAGE_DEFAULT_OTHER;
	}

	return result;
}

void dc_damage_set_other(void value)
{
	int instance;

	// Get instance.
	instance = dc_damage_get_instance();

	setlocalvar(instance + DC_DAMAGE_MEMBER_OTHER, value);
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


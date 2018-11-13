#include "data/scripts/dc_damage/config.h"

#import "data/scripts/dc_damage/config.c"

// Base entity functions will act on.
void dc_damage_get_entity()
{
	int instance;
	void result;

	result = getlocalvar(instance + DC_DAMAGE_VAR_KEY_ENT);

	if (typeof(result) != openborconstant("VT_PTR"))
	{
		result = DC_DAMAGE_DEFAULT_ENT;
	}

	return result;
}

void dc_damage_set_entity(void value)
{
	int instance;

	setlocalvar(instance + DC_DAMAGE_VAR_KEY_ENT, value);
}

// Base entity functions will act on.
void dc_damage_get_other()
{
	int instance;
	void result;

	result = getlocalvar(instance + DC_DAMAGE_VAR_KEY_OTHER);

	if (typeof(result) != openborconstant("VT_PTR"))
	{
		result = DC_DAMAGE_DEFAULT_OTHER;
	}

	return result;
}

void dc_damage_set_other(void value)
{
	int instance;

	setlocalvar(instance + DC_DAMAGE_VAR_KEY_OTHER, value);
}

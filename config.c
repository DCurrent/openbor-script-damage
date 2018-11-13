#include "data/scripts/dc_damage/config.h"

// Which instance is in use?
int dc_velocity_get_instance()
{
	void result = getlocalvar(DC_DAMAGE_VAR_KEY_INSTANCE);

	if (typeof(result) != openborconstant("VT_INTEGER"))
	{
		result = DC_DAMAGE_DEFAULT_INSTANCE;
	}

	return result;
}

void dc_velocity_set_instance(int value)
{
	setlocalvar(DC_DAMAGE_VAR_KEY_INSTANCE, value);
}
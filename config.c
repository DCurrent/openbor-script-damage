#include "data/scripts/dc_damage/config.h"

// Which instance is in use?
int dc_damage_get_instance()
{
	void result = getlocalvar(DC_DAMAGE_VAR_KEY_INSTANCE);

	if (typeof(result) != openborconstant("VT_INTEGER"))
	{
		result = DC_DAMAGE_DEFAULT_INSTANCE;
	}

	return result;
}

void dc_damage_set_instance(int value)
{
	setlocalvar(DC_DAMAGE_VAR_KEY_INSTANCE, value);
}

// Knockdown power to apply.
int dc_damage_get_drop_force()
{
	int instance;
	int result;

	result = getlocalvar(instance + DC_DAMAGE_VAR_KEY_DROP_FORCE);

	if (typeof(result) != openborconstant("VT_INTEGER"))
	{
		result = DC_DAMAGE_DEFAULT_DROP_FORCE;
	}

	return result;
}

void dc_damage_set_drop_force(int value)
{
	int instance;

	setlocalvar(instance + DC_DAMAGE_VAR_KEY_DROP_FORCE, value);
}

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

// Force (amout of hitpoints) to apply.
int dc_damage_get_hp_force()
{
	int instance;
	int result;

	result = getlocalvar(instance + DC_DAMAGE_VAR_KEY_FORCE);

	if (typeof(result) != openborconstant("VT_INTEGER"))
	{
		result = DC_DAMAGE_DEFAULT_FORCE;
	}

	return result;
}

void dc_damage_set_hp_force(int value)
{
	int instance;

	setlocalvar(instance + DC_DAMAGE_VAR_KEY_FORCE, value);
}

// Entity given credit for damage.
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

// Attack type to apply.
int dc_damage_get_attack_type()
{
	void result = getlocalvar(DC_DAMAGE_VAR_KEY_TYPE);

	if (typeof(result) != openborconstant("VT_INTEGER"))
	{
		result = DC_DAMAGE_DEFAULT_TYPE;
	}

	return result;
}

void dc_damage_set_attack_type(int value)
{
	setlocalvar(DC_DAMAGE_VAR_KEY_TYPE, value);
}
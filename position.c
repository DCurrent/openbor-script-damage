

#include "data/scripts/dc_damage/config.h"

#import "data/scripts/dc_damage/instance.c"

// "positioning" controls where we get our
// base target position from (screen, a target entity, etc.).

// X axis.
int dc_damage_get_anchor_x()
{
	char id;
	int result;

	// Get id.
	id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_ANCHOR_X;

	result = getlocalvar(id);

	if (typeof(result) != openborconstant("VT_INTEGER"))
	{
		result = DC_DAMAGE_DEFAULT_ANCHOR_X;
	}

	return result;
}

int dc_damage_set_anchor_x(int value)
{
	char id;

	// Get id.
	id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_ANCHOR_X;

	if (value == DC_DAMAGE_DEFAULT_ANCHOR_X)
	{
		value = NULL();
	}

	setlocalvar(id, value);
}

// Y axis.
int dc_damage_get_anchor_y()
{
	char id;
	int result;

	// Get id.
	id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_ANCHOR_Y;

	result = getlocalvar(id);

	if (typeof(result) != openborconstant("VT_INTEGER"))
	{
		result = DC_DAMAGE_DEFAULT_ANCHOR_Y;
	}

	return result;
}

int dc_damage_set_anchor_y(int value)
{
	char id;

	// Get id.
	id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_ANCHOR_Y;

	if (value == DC_DAMAGE_DEFAULT_ANCHOR_Y)
	{
		value = NULL();
	}

	setlocalvar(id, value);
}

// z axis.
int dc_damage_get_anchor_z()
{
	char id;
	int result;

	// Get id.
	id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_ANCHOR_Z;

	result = getlocalvar(id);

	if (typeof(result) != openborconstant("VT_INTEGER"))
	{
		result = DC_DAMAGE_DEFAULT_ANCHOR_Z;
	}

	return result;
}

int dc_damage_set_anchor_z(int value)
{
	char id;

	// Get id.
	id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_ANCHOR_Z;

	if (value == DC_DAMAGE_DEFAULT_ANCHOR_Z)
	{
		value = NULL();
	}

	setlocalvar(id, value);
}

// Accessors and Mutators
// Invert X offset settings.
int dc_damage_get_invert_x()
{
	char id;
	int result;

	// Get id.
	id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_INVERT_X;

	result = getlocalvar(id);

	if (typeof(result) != openborconstant("VT_INTEGER"))
	{
		result = DC_DAMAGE_DEFAULT_INVERT_X;
	}

	return result;
}

int dc_damage_set_invert_x(int value)
{
	char id;

	// Get ID.
	id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_INVERT_X;

	// If value is default, make sure the variable
	// is deleted.
	if (value == DC_DAMAGE_DEFAULT_INVERT_X)
	{
		value = NULL();
	}

	setlocalvar(id, value);
}

// Invert Y offset settings.
int dc_damage_get_invert_y()
{
	char id;
	int result;

	// Get id.
	id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_INVERT_Y;

	result = getlocalvar(id + DC_DAMAGE_MEMBER_INVERT_Y);

	if (typeof(result) != openborconstant("VT_INTEGER"))
	{
		result = DC_DAMAGE_DEFAULT_INVERT_Y;
	}

	return result;
}

int dc_damage_set_invert_y(int value)
{
	char id;

	// Get id.
	id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_INVERT_Y;

	if (value == DC_DAMAGE_DEFAULT_INVERT_Y)
	{
		value = NULL();
	}

	setlocalvar(id, value);
}

// Invert Z offset settings.
int dc_damage_get_invert_z()
{
	char id;
	int result;

	// Get id.
	id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_INVERT_Z;

	result = getlocalvar(id + DC_DAMAGE_MEMBER_INVERT_Z);

	if (typeof(result) != openborconstant("VT_INTEGER"))
	{
		result = DC_DAMAGE_DEFAULT_INVERT_Z;
	}

	return result;
}

int dc_damage_set_invert_z(int value)
{
	char id;

	// Get id.
	id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_INVERT_Z;

	if (value == DC_DAMAGE_DEFAULT_INVERT_Z)
	{
		value = NULL();
	}

	setlocalvar(id, value);
}

// X axis offset.
int dc_damage_get_offset_x()
{
	char id;
	int result;

	// Get id.
	id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_OFFSET_X;

	result = getlocalvar(id);

	if (typeof(result) != openborconstant("VT_INTEGER"))
	{
		result = DC_DAMAGE_DEFAULT_OFFSET_X;
	}

	return result;
}

int dc_damage_set_offset_x(int value)
{
	char id;

	// Get id.
	id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_OFFSET_X;

	if (value == DC_DAMAGE_DEFAULT_OFFSET_X)
	{
		value = NULL();
	}

	setlocalvar(id, value);
}

// Y axis offset.
int dc_damage_get_offset_y()
{
	char id;
	int result;

	// Get id.
	id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_OFFSET_Y;

	result = getlocalvar(id);

	if (typeof(result) != openborconstant("VT_INTEGER"))
	{
		result = DC_DAMAGE_DEFAULT_OFFSET_Y;
	}

	return result;
}

int dc_damage_set_offset_y(int value)
{
	char id;

	// Get id.
	id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_OFFSET_Y;

	if (value == DC_DAMAGE_DEFAULT_OFFSET_Y)
	{
		value = NULL();
	}

	setlocalvar(id, value);
}

// Z axis offset.
int dc_damage_get_offset_z()
{
	char id;
	int result;

	// Get id.
	id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_OFFSET_Z;

	result = getlocalvar(id);

	if (typeof(result) != openborconstant("VT_INTEGER"))
	{
		result = DC_DAMAGE_DEFAULT_OFFSET_Z;
	}

	return result;
}

int dc_damage_set_offset_z(int value)
{
	char id;

	// Get id.
	id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_OFFSET_Z;

	if (value == DC_DAMAGE_DEFAULT_OFFSET_Z)
	{
		value = NULL();
	}

	setlocalvar(id, value);
}
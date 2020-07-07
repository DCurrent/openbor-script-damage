#include "data/scripts/dc_damage/config.h"
#import "data/scripts/dc_damage/config.c"
#import "data/scripts/dc_damage/instance.c"
#import "data/scripts/dc_damage/entity.c"

int dc_damage_get_reaction_block_lower()
{
	char id;
	void result;

	// Get id.
	id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_REACTION_BLOCK_LOWER;

	result = getlocalvar(id);

	if (typeof(result) != openborconstant("VT_INTEGER"))
	{
		result = DC_DAMAGE_DEFAULT_REACTION_BLOCK_LOWER;
	}

	return result;
}

void dc_damage_set_reaction_block_lower(int value)
{
	// Get id.
	char id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_REACTION_BLOCK_LOWER;

	// If default, just delete the member to
	// save memory. Get will return default
	// when there's no member.
	if (value == DC_DAMAGE_DEFAULT_REACTION_BLOCK_LOWER)
	{
		value = NULL();
	}

	setlocalvar(id, value);
}

int dc_damage_get_reaction_block_middle()
{
	char id;
	void result;

	// Get id.
	id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_REACTION_BLOCK_MIDDLE;

	result = getlocalvar(id);

	if (typeof(result) != openborconstant("VT_INTEGER"))
	{
		result = DC_DAMAGE_DEFAULT_REACTION_BLOCK_MIDDLE;
	}

	return result;
}

void dc_damage_set_reaction_block_middle(int value)
{
	// Get id.
	char id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_REACTION_BLOCK_MIDDLE;

	// If default, just delete the member to
	// save memory. Get will return default
	// when there's no member.
	if (value == DC_DAMAGE_DEFAULT_REACTION_BLOCK_MIDDLE)
	{
		value = NULL();
	}

	setlocalvar(id, value);
}

int dc_damage_get_reaction_block_upper()
{
	char id;
	void result;

	// Get id.
	id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_REACTION_BLOCK_UPPER;

	result = getlocalvar(id);

	if (typeof(result) != openborconstant("VT_INTEGER"))
	{
		result = DC_DAMAGE_DEFAULT_REACTION_BLOCK_UPPER;
	}

	return result;
}

void dc_damage_set_reaction_block_upper(int value)
{
	// Get id.
	char id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_REACTION_BLOCK_UPPER;

	// If default, just delete the member to
	// save memory. Get will return default
	// when there's no member.
	if (value == DC_DAMAGE_DEFAULT_REACTION_BLOCK_UPPER)
	{
		value = NULL();
	}

	setlocalvar(id, value);
}

int dc_damage_get_reaction_pain_lower()
{
	char id;
	void result;

	// Get id.
	id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_REACTION_PAIN_LOWER;

	result = getlocalvar(id);

	if (typeof(result) != openborconstant("VT_INTEGER"))
	{
		result = DC_DAMAGE_DEFAULT_REACTION_PAIN_LOWER;
	}

	return result;
}

void dc_damage_set_reaction_pain_lower(int value)
{
	// Get id.
	char id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_REACTION_PAIN_LOWER;

	// If default, just delete the member to
	// save memory. Get will return default
	// when there's no member.
	if (value == DC_DAMAGE_DEFAULT_REACTION_PAIN_LOWER)
	{
		value = NULL();
	}

	setlocalvar(id, value);
}

int dc_damage_get_reaction_pain_middle()
{
	char id;
	void result;

	// Get id.
	id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_REACTION_PAIN_MIDDLE;

	result = getlocalvar(id);

	if (typeof(result) != openborconstant("VT_INTEGER"))
	{
		result = DC_DAMAGE_DEFAULT_REACTION_PAIN_MIDDLE;
	}

	return result;
}

void dc_damage_set_reaction_pain_middle(int value)
{
	// Get id.
	char id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_REACTION_PAIN_MIDDLE;

	// If default, just delete the member to
	// save memory. Get will return default
	// when there's no member.
	if (value == DC_DAMAGE_DEFAULT_REACTION_PAIN_MIDDLE)
	{
		value = NULL();
	}

	setlocalvar(id, value);
}

int dc_damage_get_reaction_pain_upper()
{
	char id;
	void result;

	// Get id.
	id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_REACTION_PAIN_UPPER;

	result = getlocalvar(id);

	if (typeof(result) != openborconstant("VT_INTEGER"))
	{
		result = DC_DAMAGE_DEFAULT_REACTION_PAIN_UPPER;
	}

	return result;
}

void dc_damage_set_reaction_pain_upper(int value)
{
	// Get id.
	char id = dc_damage_get_instance() + DC_DAMAGE_MEMBER_REACTION_PAIN_UPPER;

	// If default, just delete the member to
	// save memory. Get will return default
	// when there's no member.
	if (value == DC_DAMAGE_DEFAULT_REACTION_PAIN_UPPER)
	{
		value = NULL();
	}

	setlocalvar(id, value);
}


// Caskey, Damon V.
// 2020-07-07
//
// Assess the height of an incoming 
// attack, then return appropriate constant.
int dc_damage_incoming_height()
{
	float entity_height = 0.0;
	float lasthit_y = 0.0;
	int result;
	void ent;

	ent = dc_damage_get_entity();

	// Get entity height and last hit height.
	entity_height = getentityproperty(ent, "height") + getentityproperty(ent, "base") + get_entity_property(ent, "position_y");
	lasthit_y = openborvariant("lasthita");


	settextobj(1, 40, 20, 1, openborconstant("FRONTPANEL_Z"), "entity_height: " + entity_height);
	settextobj(2, 40, 30, 1, openborconstant("FRONTPANEL_Z"), "lasthit_y: " + lasthit_y);

	// If we are missing data, just assume a high hit.
	if (!entity_height || typeof(lasthit_y) == openborconstant("VT_EMPTY"))
	{
		return DC_DAMAGE_INCOMING_HEIGHT_UPPER;
	}

	float upper = entity_height * DC_DAMAGE_DETECT_HEIGHT_UPPER;
	float middle = entity_height * DC_DAMAGE_DETECT_HEIGHT_MIDDLE;

	settextobj(3, 40, 40, 1, openborconstant("FRONTPANEL_Z"), "height (U, M): " + upper + ", " + middle);


	// Starting high, compare hit height to a % of entity's
	// height, and if hit height is higher, we have a match. 
	if (lasthit_y > upper)
	{
		result = DC_DAMAGE_INCOMING_HEIGHT_UPPER;
	}
	else if (lasthit_y > middle)
	{
		result = DC_DAMAGE_INCOMING_HEIGHT_MIDDLE;
	}
	else
	{
		result = DC_DAMAGE_INCOMING_HEIGHT_LOWER;
	}

	return result;
}

// Caskey, Damon V.
// 2020-07-07
//
// Retool of old pain height system. Play pain animation 
// based on Y position of incoming attack in relation
// to own height.
void dc_damage_pain_animation_by_height()
{
	void ent;
	int damage_height;
	int animation;

	ent = dc_damage_get_entity();

	damage_height = dc_damage_incoming_height();
		
	switch (damage_height)
	{
	
	case DC_DAMAGE_INCOMING_HEIGHT_UPPER:
	default:

		animation = dc_damage_get_reaction_pain_upper();

		break;
	
	case DC_DAMAGE_INCOMING_HEIGHT_MIDDLE:

		animation = dc_damage_get_reaction_pain_middle();

	case DC_DAMAGE_INCOMING_HEIGHT_LOWER:

		animation = dc_damage_get_reaction_pain_lower();

		break;
	}

	// Switch to animation.
	executeanimation(ent, animation);
}
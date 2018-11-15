#ifndef DC_DAMAGE_CONFIG
#define DC_DAMAGE_CONFIG 1

// Configuration
#define DC_DAMAGE_PROJECTILE_OFF			0
#define DC_DAMAGE_PROJECTILE_THROWN			2	// (OpenBOR uses 2 for its default throw system).

// Default values.
#define DC_DAMAGE_DEFAULT_INSTANCE			0
#define DC_DAMAGE_DEFAULT_DIRECTION_ADJUST	openborconstant("DIRECTION_ADJUST_OPPOSITE")
#define DC_DAMAGE_DEFAULT_DOL_FORCE			0
#define DC_DAMAGE_DEFAULT_DROP_FORCE		0
#define DC_DAMAGE_DEFAULT_DROP_VELOCITY_X	1.2
#define DC_DAMAGE_DEFAULT_DROP_VELOCITY_Y	3.0
#define DC_DAMAGE_DEFAULT_DROP_VELOCITY_Z	0.0
#define DC_DAMAGE_DEFAULT_ENT				getlocalvar("self")
#define DC_DAMAGE_DEFAULT_FORCE				0
#define DC_DAMAGE_DEFAULT_OTHER				getlocalvar("self")
#define DC_DAMAGE_DEFAULT_PROJECTILE		DC_DAMAGE_PROJECTILE_OFF
#define DC_DAMAGE_DEFAULT_TYPE				openborconstant("ATK_NORMAL")

// Variable keys.
#define DC_DAMAGE_VAR_KEY_INSTANCE			"dcdam_0"
#define DC_DAMAGE_VAR_KEY_DIRECTION_ADJUST	"dcadm_1"
#define DC_DAMAGE_VAR_KEY_DOL_FORCE			"dcdam_2"
#define DC_DAMAGE_VAR_KEY_DROP_FORCE		"dcdam_3"
#define DC_DAMAGE_VAR_KEY_DROP_VELOCITY_X	"dcdam_4"
#define DC_DAMAGE_VAR_KEY_DROP_VELOCITY_Y	"dcdam_5"
#define DC_DAMAGE_VAR_KEY_DROP_VELOCITY_Z	"dcdam_6"
#define DC_DAMAGE_VAR_KEY_ENT				"dcdam_7"
#define DC_DAMAGE_VAR_KEY_FORCE				"dcdam_8"
#define DC_DAMAGE_VAR_KEY_OTHER				"dcdam_9"
#define DC_DAMAGE_VAR_KEY_PROJECTILE		"dcdam_10"
#define DC_DAMAGE_VAR_KEY_TYPE				"dcdam_l1"

#endif // !DC_DAMAGE_CONFIG


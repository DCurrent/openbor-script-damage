#ifndef DC_DAMAGE_CONFIG
#define DC_DAMAGE_CONFIG 1

// Configuration

// Default values.
#define DC_DAMAGE_DEFAULT_INSTANCE		0
#define DC_DAMAGE_DEFAULT_DROP_FORCE	0
#define DC_DAMAGE_DEFAULT_ENT			getlocalvar("self")
#define DC_DAMAGE_DEFAULT_FORCE			0
#define DC_DAMAGE_DEFAULT_OTHER			NULL()
#define DC_DAMAGE_DEFAULT_TYPE			openborconstant("ATK_NORMAL")

// Variable keys.
#define DC_DAMAGE_VAR_KEY_INSTANCE		"dcdam_0"
#define DC_DAMAGE_VAR_KEY_DROP_FORCE	"dcdam_1"
#define DC_DAMAGE_VAR_KEY_ENT			"dcdam_2"
#define DC_DAMAGE_VAR_KEY_FORCE			"dcdam_3"
#define DC_DAMAGE_VAR_KEY_OTHER			"dcdam_4"
#define DC_DAMAGE_VAR_KEY_TYPE			"dcdam_5"

#endif // !DC_DAMAGE_CONFIG


# DC Damage
Control applying damage to entities. Full readme in progress.

## Dependencies
None

## Installation
1. Install any listed dependencies. See an individual dependency's readme for specific instructions.
1. Download and unzip the [latest release](../../releases).
1. Place the *dc_damage* folder into your *data/scripts* folder.
1. Add ```#include data/scripts/dc_damage/main.c``` into any other script you would like to add this library’s functionality to.
1. Open *config.h* to modify default values used in the library.

## Use Cases

#### Function List

##### dc_damage_check_ko()
Find out if damage force will reduce entity's hitpoints to 0 or below when applied. Returns true (1) if damage will reduce entity's health to 0 or below, false (0) otherwise. Takes into account the final force after engine calculates attack/defense ratios.

```c
int ko = dc_damage_check_ko();
```

##### dc_damage_get_final_force()
Find out how much hitpoint damage entity will take (i.e. after engine calculates offense/defense ratios) when damage is applied. Sends entity (defender), other (attacker), and attack members to native ```calculatedamage()``` function and returns the result.

For example, if you set up the damage members to apply a force of 80 with attack type 1, and the defender's attack type 1 defense is 0.5, ```dc_damage_get_final_force()``` will return 40.

```c
int final_force = dc_damage_get_final_force();
```


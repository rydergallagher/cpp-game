#include "calculateDamage.h"

int calculateDamage(Character attacker, Character target){

    int attackerStrength = attacker.getStrength();
    int targetDefense = target.getDefense();

    int result = attackerStrength - targetDefense;

    return result;

}
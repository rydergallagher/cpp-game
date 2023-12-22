#include "fight.h"

void fight(Character player, Character enemy){

    bool fightContinue = true;

    while(fightContinue == true){

        int playerHp = player.getHp();
        int enemyHp = enemy.getHp(); 

        std::cout << "PLAYER TURN" << std::endl;
        enemyHp = enemyHp - calculateDamage(player, enemy);
        enemy.setHp(enemyHp);

        if(enemyHp <= 0){

            fightContinue = false;
            break;

        }

        std::cout << "ENEMY TURN" << std::endl;
        playerHp = playerHp - calculateDamage(enemy, player);
        player.setHp(playerHp);

        if(playerHp <= 0){

            fightContinue = false;
            break;
            
        }

    }

}
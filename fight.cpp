#include "fight.h"

void fight(Character player, Character enemy){

    bool fightContinue = true;

    while(fightContinue == true){

        int playerHp = player.getHp();
        int enemyHp = enemy.getHp(); 
        int damage = 0;

        std::cout << "PLAYER TURN" << std::endl;
        damage = calculateDamage(player, enemy);
        enemyHp = enemyHp - damage;
        enemy.setHp(enemyHp);

        std::cout << "You deal " << damage << "!" << std::endl;

        if(enemyHp <= 0){

            fightContinue = false;
            std::cout << "And killed the enemy!" << std::endl;
            break;

        }

        std::cout << "ENEMY TURN" << std::endl;
        damage = calculateDamage(enemy, player);
        playerHp = playerHp - damage;
        player.setHp(playerHp);

        std::cout << "The enemy dealt " << damage << "!" << std::endl;

        if(playerHp <= 0){

            fightContinue = false;
            std::cout << "You were killed!" << std::endl;
            break;

        }

    }

}
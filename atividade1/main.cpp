#include "Player.hpp"

#include <iostream>

int main() {
    std::string playerName = "";
    while (playerName == "") {
        std::cout << "Informe o nome do jogador" << std::endl;
        std::cin >> playerName;
    }

    Player *player;
    player = new Player(playerName);

    delete player;

    // Level1 level1 = new Level1(player);
    // while (!level1.finished) {
    //     //TODO: Colocar método para o player explorar a área com um % de chance de achar um item e outro percentuald de achar um mob,
    //     // setar a property como finished quando todos os mobs forem mortos ou o player morrer
    // }

    return 0;
}
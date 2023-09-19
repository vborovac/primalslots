#include <iostream>
#include <cstdlib>
#include <ctime>
#include "matrica.h"
#include "player.h"






int main() {
    Player p;
    p.setPlayer();
    std::string state;

    while (p.MCheck()) {
        std::cout << "Press Enter to play, 'c' to change stake,'a' to go automatic slot, or 'q' to quit: " << std::endl;
        std::getline(std::cin, state);

        if (state.empty()) {
            p.Play();
            std::cout << std::endl;
            p.Stats();
        }
        else if (state == "c") {
            std::cout << "Enter the new stake: ";
            double newStake;
            std::cin >> newStake;
            p.SetStake(newStake); 
            std::cin.ignore(); 
        }
        else if (state == "a") {
            for (float i = 0; i < p.money / p.stake; i++) {
                p.Play();
                std::cout << std::endl;
                p.Stats();
            }
        }
        else if (state == "q") {
            break;
        }
    }
    return 0;
   }






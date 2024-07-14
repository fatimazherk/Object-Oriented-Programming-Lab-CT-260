// 4. Write C++ code to represent a hitting game by using OOP concept. The details are as
// follows: This game is being played between two teams (i.e. your team and the enemy
// team). The total number of players in your team is randomly generated and stored
// accordingly. The function generates a pair of numbers and matches each pair. If the
// numbers get matched, the following message is displayed: “Enemy got hit by your team!”
// Otherwise, the following message is displayed: “You got hit by the enemy team!” The
// number of hits should be equal to the number of players in your team. The program should
// tell the final result of your team by counting the hits of both the teams.

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

class Team {
private:
    int playerCount;
    int hits;

public:
    Team(int count) : playerCount(count), hits(0) {}

    int getPlayerCount() const {
        return playerCount;
    }

    void incrementHits() {
        hits++;
    }

    int getHits() const {
        return hits;
    }
};

class HittingGame {
private:
    Team* yourTeam;
    Team* enemyTeam;

public:
    HittingGame() {
        srand(static_cast<unsigned>(time(0)));
        int yourTeamPlayers = rand() % 10 + 1;  // Random number of players between 1 and 10
        yourTeam = new Team(yourTeamPlayers);
        enemyTeam = new Team(yourTeamPlayers);
    }

    ~HittingGame() {
        delete yourTeam;
        delete enemyTeam;
    }

    void play() {
        for (int i = 0; i < yourTeam->getPlayerCount(); i++) {
            int yourTeamNumber = rand() % 100;
            int enemyTeamNumber = rand() % 100;

            if (yourTeamNumber == enemyTeamNumber) {
                std::cout << "Enemy got hit by your team!" << std::endl;
                yourTeam->incrementHits();
            } else {
                std::cout << "You got hit by the enemy team!" << std::endl;
                enemyTeam->incrementHits();
            }
        }
    }

    void displayResults() const {
        std::cout << "Your team hits: " << yourTeam->getHits() << std::endl;
        std::cout << "Enemy team hits: " << enemyTeam->getHits() << std::endl;

        if (yourTeam->getHits() > enemyTeam->getHits()) {
            std::cout << "Your team wins!" << std::endl;
        } else if (yourTeam->getHits() < enemyTeam->getHits()) {
            std::cout << "Enemy team wins!" << std::endl;
        } else {
            std::cout << "It's a draw!" << std::endl;
        }
    }
};

int main() {
    HittingGame game;
    game.play();
    game.displayResults();
    return 0;
}

#include "singleton.hpp"
#include <string>
#include <iostream>

class Player : public Singleton<Player>
{
  friend class Singleton<Player>;

private:
  Player() : name("Unknown"), health(100) {}

  std::string name;
  int health;

public:
  void SetName(const std::string &newName) { name = newName; }
  std::string GetName() const { return name; }

  void SetHealth(int h) { health = h; }
  int GetHealth() const { return health; }

  void PrintStatus() const
  {
    std::cout << "Player: " << name << ", Health: " << health << std::endl;
  }
};

int main()
{
  // For console alignment
  std::cout << std::endl;
  Player *player = Player::GetInstance();

  player->PrintStatus();

  player->SetName("Hero");
  player->SetHealth(75);

  player->PrintStatus();

  Player *samePlayer = Player::GetInstance();
  samePlayer->PrintStatus();

  return 0;
}
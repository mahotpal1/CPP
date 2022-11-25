#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
 public :
  //attributes
  string name;
  int health;
  int xp;

  //methods
  void talk(string i){
    cout << name << i << endl;
  }
  void is_dead(){
    cout << name << " xP : " << xp << " health : " << health<<endl;
  }
};

int main(){
  Player Vishal;
  Player Harsh;

  //Array of objects;
  Player player[] {Vishal, Harsh};

  //sreating objects using pointers and heap:
  Player *player1 (nullptr);
  player1 = new Player;
  (*player1).name="Vishal";
  (*player1).health=100;
  //or
  player1->xp = 100;

  player1->talk(" will Kill You!");
  player1->is_dead(); 
  delete player1;

  return 0;
}
#include <iostream>
#include <Movies.h>

void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string name, std::string rating, int watched);


void increment_watched(Movies &movies, std::string name){
  if(movies.increment_watched(name)){
    std::cout << name << " watch incremented " << std::endl;
  }else{
    std::cout << name << " not found " << std::endl;
  }
}

void add_movie(Movies &movies, std::string name, std::string rating, int watched){
  if(movies.add_movie(name, rating, watched)){
    std::cout << name << " added " << std::endl;
  }else{
    std::cout << name << " allready Exist! " << std::endl;
  }
}

int main(){
  Movies my_movie;

  add_movie(my_movies, "SinghSaab", "PG-13", 2)
}
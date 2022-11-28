#include <iostream>
#include "Movies.h"

void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string name, std::string rating, int watched);

void increment_watched(Movies &movies, std::string name){
  if(movies.incrementWatched(name)){
    std::cout << name << " watch incremented " << std::endl;
  }else{
    std::cout << name << " not found " << std::endl;
  }
}

void add_movie(Movies &movies, std::string name, std::string rating, int watched){
  if(movies.addMovie(name, rating, watched)){
    std::cout << name << " added " << std::endl;
  }else{
    std::cout << name << " allready Exist! " << std::endl;
  }
}

int main(){
  Movies my_movie;
  my_movie.display();
  add_movie(my_movie, "Singh Saab", "PG-13", 2);
  add_movie(my_movie, "Take You To The Moon", "G-2", 12);
  add_movie(my_movie, "Sherlock", "G", 7);
  add_movie(my_movie, "Sheldon Cooper", "R", 2);
  add_movie(my_movie, "Where Are You Now?", "G-2", 12);
  add_movie(my_movie, "The Boys", "R", 12);
  my_movie.display();
  increment_watched(my_movie,"The Boys");
  my_movie.display();
  return 0;
}
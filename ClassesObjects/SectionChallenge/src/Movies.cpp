#include "Movies.h"
#include <string>
#include <iostream>

Movies::Movies(){

}

Movies::~Movies(){

}

bool Movies::addMovie(std::string name, std::string movie_rating, int watched){
  for(const Movie &movie:movie_list){
    if(movie.getName()==name){
      return false;
    }
  }
  Movie m{name,movie_rating,watched};
  movie_list.push_back(m);
  return true;
}

bool Movies::incrementWatched(std::string name){
  for(Movie &movie:movie_list){
    if(movie.getName()==name){
      movie.increment_watched();
      return true;
    }
  }
  return false;
}

void Movies::display() const {
  std::cout << "\n\nMovies Collection :" << std::endl;
  if(movie_list.size() <= 0){
    std::cout << "No Movie in the list!" << std::endl;
  }else{
    for(Movie movie:movie_list){
      movie.display();
      std::cout << std::endl;
    }
  }
  std::cout << std::endl;
}
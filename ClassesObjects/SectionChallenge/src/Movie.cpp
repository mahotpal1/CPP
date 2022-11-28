#include "Movie.h"
#include <iostream>

Movie::Movie(std::string name, std::string movieRating, int watched)
  :name{name}, movie_rating{movieRating}, watched{watched}{
}

Movie::Movie(const Movie &movie)
  :name{movie.name}, movie_rating{movie.movie_rating}, watched{movie.watched}{

}

Movie::~Movie(){

}

void Movie::display() const{
  std::cout << "Name : " << name << "\nMovie Rating = " << movie_rating << "\nTotal times Watched : " << watched << std::endl;
}
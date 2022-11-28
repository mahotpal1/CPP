#ifndef _MOVIES_H_
#define _MOVIES_H_
#include "Movie.h"
#include <vector>

class Movies{
  private :
    std::vector<Movie> movie_list;
  public :
    Movies();
    ~Movies();

    bool addMovie(std::string name, std::string movie_rating, int watched);
    bool incrementWatched(std::string name);

    void display() const;
};
#endif
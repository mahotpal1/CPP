#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>

class Movie{
  private :
    std::string name;
    std::string movie_rating; //movie rating can be G, PG, PG-13, R
    int watched;
  public :
    Movie(std::string, std::string movie_rating, int watched);
    
    Movie(const Movie &movie);
    
    ~Movie();
 
    std::string inline getName() const { return name;}
    void inline setName(std::string name){this->name = name;}
    std::string inline getMovieRating() const { return movie_rating;}
    void inline setMovieRating(std::string MovieRating){this->movie_rating=MovieRating;}
    int inline getWatched() const{return watched;}
    void inline setWatched(int watched){this->watched=watched;}
 
    void increment_watched(){++watched;}
    void display() const;

};
#endif
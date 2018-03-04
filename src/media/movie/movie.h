

#ifndef MEDIA_INVENTORY_MANAGER_MOVIE_H
#define MEDIA_INVENTORY_MANAGER_MOVIE_H

#include <vector>
#include "interfaces/icriteria.h"
#include "../media.h"

enum class MovieType : char { COMEDY = 'F', DRAMA = 'D', CLASSIC = 'C',empty = ' '};

class Movie :  public Criteria, protected Media{
public:
  
  MovieType movType;
  std::string dirctr;
  
  
  /**
   *
   */
  Movie();
  
  /**
   *
   * @param medType
   * @param medTitle
   * @param medYear
   * @param dir
   * @param actor
   */
  Movie(Primary prm, Secondary sc, MovieType movType,
        std::string medTitle, int medYear, std::string dir);
  
  
  /**
   *
   */
  virtual ~Movie();
  
  
  virtual MovieType getMovieType()const = 0;
  
};


#endif //MEDIA_INVENTORY_MANAGER_MOVIE_H

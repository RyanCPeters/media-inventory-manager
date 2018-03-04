//
// Created by R.Peters on 3/2/2018.
//

#ifndef MEDIA_INVENTORY_MANAGER_MOVIE_H
#define MEDIA_INVENTORY_MANAGER_MOVIE_H

#include <vector>
#include "media/media.h"
#include "interface/icriteria.h"

enum class MovieType : char { COMEDY = 'F', DRAMA = 'D', CLASSIC = 'C',empty = ' '};

class Movie : protected Media, public Criteria{
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
  Movie(MovieType movType,
        std::string medTitle,
        int medYear,
        std::string dir);
  
  
  /**
   *
   */
  virtual ~Movie();
  
  
  virtual MovieType getMovieType()const = 0;
  
};


#endif //MEDIA_INVENTORY_MANAGER_MOVIE_H

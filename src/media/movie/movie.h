

#ifndef MEDIA_INVENTORY_MANAGER_MOVIE_H
#define MEDIA_INVENTORY_MANAGER_MOVIE_H

#include <vector>
#include "interfaces/icriteria.h"
#include "interfaces/movie_enums.h"
#include "../media.h"



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
  Movie(MovieType movieType, std::string medTitle, int medYear, std::string dir,
        int releaseMonth, std::string majorActor);
  
  
  /**
   *
   */
  virtual ~Movie();
  
  
  virtual MovieType getMovieType()const = 0;
  
};


#endif //MEDIA_INVENTORY_MANAGER_MOVIE_H

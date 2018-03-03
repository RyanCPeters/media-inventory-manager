//
// Created by R.Peters on 3/2/2018.
//

#ifndef MEDIA_INVENTORY_MANAGER_MOVIE_H
#define MEDIA_INVENTORY_MANAGER_MOVIE_H

#include <vector>
#include "media.h"
#include "icriteria.h"

enum class MovieType : char { COMEDY = 'F', DRAMA = 'D', CLASSIC = 'C'};

class Movie : private Media, public Criteria{
public:
  
  MovieType movType{nullptr};
  std::string dirctr{std::string()};
  std::vector<std::string> actors{};
  
  
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
  Movie(char movType,
        std::string medTitle,
        int medYear,
        std::string dir,
        std::string actor);
  
  
  /**
   *
   */
  virtual ~Movie();
  
};


#endif //MEDIA_INVENTORY_MANAGER_MOVIE_H

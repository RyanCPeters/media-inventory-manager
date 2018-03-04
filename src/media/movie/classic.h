//
// Created by Peter on 3/4/2018.
//

#ifndef MEDIA_INVENTORY_MANAGER_CLASSIC_H
#define MEDIA_INVENTORY_MANAGER_CLASSIC_H


#include "movie.h"

class Classic : private Movie{
public:
  
  Classic(std::string medTitle, int medYear, int movMonth,
            std::string dir, std::string actor);


private:
  std::string getTitle() const override;
  
  int getYear() const override;
  
  MediaType getMediaType() const override;
  
  MovieType getMovieType() const override;
  
  int compare(const Media &rhs) const override;


private:
  // establishing the empty constructor as private
  // in order to prevent people from creating a useless
  // empty, Movie object.
  Classic();
  
  int month;
  
  /**
   *
   */
  std::vector<std::string> actors{};
  
};


#endif //MEDIA_INVENTORY_MANAGER_CLASSIC_H

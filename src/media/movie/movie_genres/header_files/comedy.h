//
// Created by Peter on 3/4/2018.
//

#ifndef MEDIA_INVENTORY_MANAGER_COMEDY_H
#define MEDIA_INVENTORY_MANAGER_COMEDY_H


#include "../../movie.h"

class Comedy : private Movie{
public:
  
  Comedy(
      const std::string &medTitle,
      int year,
      int month,
      std::string dir
  );


private:
  
  
  std::string getTitle() const override;
  
  int getYear() const override;
  
  MediaType getMediaType() const override;
  
  MovieType getMovieType() const override;
  
  int compare(const Media &rhs) const override;


  // establishing the empty constructor as private
  // in order to prevent people from creating a useless
  // empty, Movie object.
  Comedy();
};


#endif //MEDIA_INVENTORY_MANAGER_COMEDY_H

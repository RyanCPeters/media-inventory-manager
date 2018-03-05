//
// Created by Peter on 3/4/2018.
//

#ifndef MEDIA_INVENTORY_MANAGER_CLASSIC_H
#define MEDIA_INVENTORY_MANAGER_CLASSIC_H


#include "../../movie.h"

class Classic : public Movie{
public:
  
  Classic(
      const std::string &medTitle,
      int year,
      int month,
      std::string dir,
      std::string actor
  );
  
private:



  // establishing the empty constructor as private
  // in order to prevent people from creating a useless
  // empty, Movie object.
  Classic();
};


#endif //MEDIA_INVENTORY_MANAGER_CLASSIC_H

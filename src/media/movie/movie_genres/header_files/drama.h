//
// Created by Peter on 3/4/2018.
//

#ifndef MEDIA_INVENTORY_MANAGER_DRAMA_H
#define MEDIA_INVENTORY_MANAGER_DRAMA_H

#include "../../movie.h"

class Drama {
  
  Drama( const std::string &medTitle,
         int year,
         int month,
         std::string dir );
  
  Drama( const std::string &medTitle,
         int year,
         int month,
         std::string dir,
         std::string actor);
};


#endif //MEDIA_INVENTORY_MANAGER_DRAMA_H

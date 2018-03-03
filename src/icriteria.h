#ifndef MEDIA_INVENTORY_MANAGER_COMPARABLE_INTERFACE_H
#define MEDIA_INVENTORY_MANAGER_COMPARABLE_INTERFACE_H

#include <string>

/*
  
  The items should be sorted as follows:

    comedy   (‘F’) by: Title, then Year it released
    dramas   (‘D’) by: Director, then Title
    classics (‘C’) by: Release date, then Major actor
 
 */

/**
 * The internal data types of this union are named according to their
 * corresponding movie genre, and abstracted primary sorting criteria
 */
union Primary {
  // Comedy:
  // the comedy's title as a single or multi-word string
  std::string comedy_titl{std::string()};
  
  // Drama:
  // The director's name in the drama, saved as a single string in the
  // form of :
  //          "First [Middle] Last"
  // Note that the middle name inside of the square brackets  []  is
  // optional, and shall only be included where the official inventory input
  // file includes it.
  std::string drama_dirctr{std::string()};
  
  // Classic:
  int classic_year{2018}; // the year the classic was released
  int classic_mnth{12};  // the month the classic was released
};

/**
 * The internal data types of this union are named according to their
 * corresponding movie genre, and abstracted secondary sorting criteria
 */
union Secondary {
  // Comedy:
  int comedy_year{2018}; // the year the comedy was released
  
  // Drama:
  // the drama's title as a single or multi-word string
  std::string drama_titl{std::string()};
  
  // Classic:
  // the leading actor's name in the classic, saved as a single string in the
  // form of :
  //          "First [Middle] Last"
  // Note that the middle name inside of the square brackets  []  is
  // optional, and shall only be included where the official inventory input
  // file includes it.
  std::string classic_actr{std::string()};
};

class Criteria {
public:
  Primary prim;
  Secondary sec;
};



#endif //MEDIA_INVENTORY_MANAGER_COMPARABLE_INTERFACE_H

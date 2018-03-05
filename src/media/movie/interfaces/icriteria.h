#ifndef MEDIA_INVENTORY_MANAGER_COMPARABLE_INTERFACE_H
#define MEDIA_INVENTORY_MANAGER_COMPARABLE_INTERFACE_H

#include <string>
#include <vector>
#include "movie_enums.h"



  

class ICriteria{
public:
  
  /*
    The items should be sorted as follows:
    
    comedy   (‘F’) by: Title, then Year it released
    dramas   (‘D’) by: Director, then Title
    classics (‘C’) by: Release date, then Major actor
  */
  union Primary{
    ~Primary() { };
  
    /**
     * a string holding the title of the comedy movie
     */
    std::string comedy;
    
    /**
     * a string holding the name of the person who directed the drama movie
     */
    std::string drama;
    /**
     * an array of int containing the year then month in which the classic
     * movie was released.
     *
     *    so, classic.primary[0] would return the year of release.
     *    and, classic.primary[1] would return the month of release.
     */
    std::vector<int> classic;

    Primary():classic{}{};
    
    Primary(int year, int month){
      std::vector<int> tmp({year,month});
      classic = {std::move(tmp)};
    };
  }primary;
  
  union Secondary {
    ~Secondary() { }
  
    /**
     * an int representing the year the comedy movie was released
     */
    int comedy;
  
    /**
     * a string holding the title of the drama movie
     */
    std::string drama;
    
    /**
     * a vector<string> holding the name of the
     * major staring actor(s) in the movie.
     */
    std::vector<std::string> classic;
  
    Secondary():classic{}{};
  
    explicit Secondary(std::string name){
    std::vector<std::string> tmp(1,std::move(name));
    classic = {std::move(tmp)};
    };
  
  }secondary;
  
  
  // simple empty ctor for union criteria initialization
  ICriteria() = default;
  
  /** Ctor for our union Criteria object.
   * Takes a valid MovieType object, along with appropriate parameter
   * information for that MovieType, will instanciate this Criteria object
   * to hold the correct references for the movie that owns it.
   *
   * @param mt
   * @param ttl
   * @param year
   * @param dir
   * @param month
   * @param majorActor
   */
  ICriteria(const MovieType& mt,
           std::string ttl = std::string(),
           int year = 2018,
           std::string dir = std::string(),
           int month = 0,
           std::string majorActor = std::string())
  {
  
    // this switch block uses the movieType as an indicator for which genre
    // specific struct to initialize for this union ICriteria object.
    switch (mt){
      case MovieType::COMEDY:
        primary.comedy = {std::move(ttl)};
        secondary.comedy = {std::move(year)};
        return;
      case MovieType::DRAMA:
        primary.drama = {std::move(dir)};
        secondary.drama = {std::move(ttl)};
        return;
      case MovieType::CLASSIC:
        primary.classic = {std::vector<int>({year,month})};
        secondary.classic = {std::move(std::vector<std::string>({majorActor}))};
        break;
      default:break;
    }
    
  }
  
  virtual MovieType getMovieType()const = 0;
  
};

#endif //MEDIA_INVENTORY_MANAGER_COMPARABLE_INTERFACE_H
/*
  The items should be sorted as follows:
  
  comedy   (‘F’) by: Title, then Year it released
  dramas   (‘D’) by: Director, then Title
  classics (‘C’) by: Release date, then Major actor
*/

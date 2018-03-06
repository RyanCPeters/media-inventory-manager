

#ifndef MEDIA_INVENTORY_MANAGER_MOVIE_H
#define MEDIA_INVENTORY_MANAGER_MOVIE_H

#include <vector>
#include "icriteria.h"
#include "movie_enums.h"
#include "media.h"



class Movie :  public ICriteria, public Media{

private:
  /**
   *
   */
  MovieType movType;
  
  /**
   *
   */
  std::string dirctr;
  
public:
  
  /** the empty ctor
   *
   */
  Movie()
      : Media(MediaType::movie, nullptr,2018), ICriteria(),
        movType(MovieType::empty), dirctr(std::string()){};
  
  /**
   *
   * @param mediaType
   * @param movieType
   * @param medTitle
   * @param year
   * @param dir
   * @param releaseMonth
   * @param majorActor
   */
  Movie(MediaType mediaType, MovieType movieType, std::string medTitle,
        int year, std::string dir, int releaseMonth,
        std::string majorActor)
      : Media(mediaType,std::move(medTitle),year),
        movType(movieType),
        dirctr(std::move(dir)),
        ICriteria(movieType,
                  medTitle,
                  year,
                  dir,
                  releaseMonth,
                  std::move(majorActor))
  { }


/**
 *
 */
  virtual ~Movie() {}

/**
 *
 * @return
 */
  virtual MovieType getMovieType() const {
    return movType;
  }
  
  /**
   *
   * @param rhs
   * @return
   */
  int compareMovies(const Movie &rhs) const {
    
    
    int setOrder = compareMedia(rhs), setOtherOrder;
    
    if(setOrder != 0)return setOrder;
    
    setOrder = 0, setOtherOrder = 0;
    switch (movType){
      case MovieType::CLASSIC: ++setOrder;
      case MovieType::DRAMA:   ++setOrder;
      case MovieType::COMEDY:  ++setOrder;
      default:break;
    }
    switch ( rhs.getMovieType() ){
      case MovieType::CLASSIC: ++setOtherOrder;
      case MovieType::DRAMA:   ++setOtherOrder;
      case MovieType::COMEDY:  ++setOtherOrder;
      default:break;
    }
    
    if(setOrder < setOtherOrder) return -1;
    if(setOrder > setOtherOrder) return  1;
    
    /*
     * By this point, we have established that this and rhs both are movies of
     * the same genre.
     * */
    auto classicLambda = [&](){
      auto iter = secondary.classic.begin();
      auto otherIter = rhs.secondary.classic.begin();
      setOrder = 0;
      while( iter != secondary.classic.end() &&
             otherIter != rhs.secondary.classic.end()){
        setOrder = (*iter).compare((*otherIter));
        if(setOrder < 0){
          return -1;
        } else if( setOrder == 0) {
          ++iter, ++otherIter;
        } else return 1;
      }
      return 0;
    };
    switch (movType){
      case MovieType::CLASSIC:
        if(primary.classic[0] < rhs.primary.classic[0]) return -1;
        if(primary.classic[0] > rhs.primary.classic[0]) return  1;
        if(primary.classic[1] < rhs.primary.classic[1]) return -1;
        if(primary.classic[1] > rhs.primary.classic[1]) return  1;
        return classicLambda();
      case MovieType::DRAMA:
        setOrder = (primary.drama.compare(rhs.primary.drama));
        setOrder = (( setOrder < 0)? -1 :(setOrder > 0)?  1: 0);
        if(setOrder != 0)return setOrder;
        setOrder = (secondary.drama.compare(rhs.secondary.drama));
        setOrder = ( setOrder < 0)? -1 :(setOrder > 0)?  1: 0;
        return setOrder;
      case MovieType::COMEDY:
        setOrder = (primary.comedy.compare(rhs.primary.comedy));
        setOrder = (( setOrder < 0)? -1 :(setOrder > 0)?  1: 0);
        if(setOrder != 0)return setOrder;
        return (secondary.comedy < rhs.secondary.comedy)? -1
                                                        : (secondary.comedy > rhs.secondary.comedy)?  1
                                                                                                   : 0;
      
      default:break;
    }
  };
  

  
  /**
   *
   * @param rhs
   * @return
   */
  virtual int compareMedia(const Media &rhs) const override
  {
    return (getMediaType() < rhs.getMediaType())? (short)-1
          :(getMediaType() > rhs.getMediaType())? (short) 1
          :(short) 0;
  }
  
};




















#endif //MEDIA_INVENTORY_MANAGER_MOVIE_H

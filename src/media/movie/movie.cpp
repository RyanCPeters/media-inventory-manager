//
// Created by R.Peters on 3/2/2018.
//

#include "movie.h"

/** custom empty constructor implementation
 *
 */
Movie::Movie()
    : Media(MediaType::MOVIE, nullptr,2018), ICriteria(),
      movType(MovieType::empty), dirctr(std::string())
{}


Movie::Movie(MovieType movieType,
             std::string medTitle,
             int year,
             std::string dir,
             int releaseMonth = 0,
             std::string majorActor = std::string())
    : Media(medType,std::move(medTitle),year),
      movType(movieType),
      dirctr(std::move(dir)),
      ICriteria(movieType,
               medTitle,
               year,
               dir,
               releaseMonth,
               std::move(majorActor))
{ }


Movie::~Movie() {}

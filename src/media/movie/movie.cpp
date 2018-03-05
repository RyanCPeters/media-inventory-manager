//
// Created by R.Peters on 3/2/2018.
//

#include "movie.h"

/** custom empty constructor implementation
 *
 */
Movie::Movie()
    : Media(MediaType::MOVIE, nullptr,2018), Criteria(),
      movType(MovieType::empty), dirctr(std::string())
{}


Movie::Movie(MovieType movieType,
             std::string medTitle,
             int medYear,
             std::string dir,
             int releaseMonth = 0,
             std::string majorActor = std::string())
    : Media(medType,std::move(medTitle),medYear),
      movType(movieType),
      dirctr(std::move(dir)),
      Criteria(movieType,
               medTitle,
               medYear,
               dir,
               releaseMonth,
               std::move(majorActor))
{ }


Movie::~Movie() {}

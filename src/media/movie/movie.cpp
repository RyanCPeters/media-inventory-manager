//
// Created by R.Peters on 3/2/2018.
//

#include "movie.h"

Movie::Movie()
    : Media(MediaType::MOVIE, nullptr,2018), Criteria(),
      movType(MovieType::empty), dirctr(std::string())
{}

/**
 *
 * @param medType
 * @param medTitle
 * @param medYear
 * @param dir
 * @param actor
 */
Movie::Movie(MovieType movType, std::string medTitle, int medYear,
             std::string dir)
    : Media(MediaType::MOVIE, std::move(medTitle), medYear),
      movType(movType),
      dirctr(std::move(dir))
{}


Movie::~Movie() {}

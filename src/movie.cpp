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
Movie::Movie(char movType, std::string medTitle, int medYear,
             std::string dir, std::string actor)
    : Media(MediaType::MOVIE, std::move(medTitle), medYear),
      movType((MovieType)movType),
      dirctr(std::move(dir)),
      actors({std::move(actor)})
{}


Movie::~Movie() {}

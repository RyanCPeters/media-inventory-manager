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
Movie::Movie(Primary prm, Secondary sc, MovieType movieType,
             std::string medTitle, int medYear, std::string dir)
    : Criteria(prm, sc),
      Media(
            MediaType::MOVIE,
            std::move(medTitle),
            medYear
            ),
      movType(movieType),
      dirctr(std::move(dir))
{}


Movie::~Movie() {}

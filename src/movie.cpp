//
// Created by R.Peters on 3/2/2018.
//

#include "movie.h"

Movie::Movie()
    : medType(std::move(MediaType::MOVIE)),
      title(nullptr),
      year(2018),
      movType(nullptr),
      dirctr(nullptr),
      actors({nullptr})
{

}

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
    : medType(std::move(MediaType::MOVIE)),
      title(std::move(medTitle)),
      year(std::move(medYear)),
      movType(std::move((MovieType)movType)),
      dirctr(std::move(dir)),
      actors({std::move(actor)})
{}


Movie::~Movie() {}

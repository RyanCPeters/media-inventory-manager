//
// Created by Peter on 3/4/2018.
//

#include "../header_files/classic.h"

/**
 *
 * @param medTitle
 * @param year
 * @param month
 * @param dir
 * @param actor
 */
Classic::Classic( const std::string &medTitle,
                  int year,
                  int month,
                  std::string dir,
                  std::string actor )
            : Movie(MediaType::MOVIE, MovieType::CLASSIC, medTitle, year,
                    std::move(dir),
                    month,
                    std::move(actor))
{ } // end Classic::Classic(...)


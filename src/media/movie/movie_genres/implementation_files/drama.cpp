//
// Created by Peter on 3/4/2018.
//

#include "../header_files/drama.h"


/**
 *
 * @param medTitle
 * @param year
 * @param month
 * @param dir
 */
Drama::Drama( const std::string &medTitle,
                int year,
                int month,
                std::string dir )
    : Movie(MediaType::MOVIE,
            MovieType::COMEDY,
            medTitle,
            year,
            std::move(dir),
            month,
            "")
{ } // end Classic::Classic(...)

/**
 *
 * @param medTitle
 * @param year
 * @param month
 * @param dir
 * @param actor
 */
Drama::Drama( const std::string &medTitle,
                int year,
                int month,
                std::string dir,
                std::string actor)
    : Movie(MediaType::MOVIE,
            MovieType::COMEDY,
            medTitle,
            year,
            std::move(dir),
            month,
            actor)
{ } // end Classic::Classic(...)

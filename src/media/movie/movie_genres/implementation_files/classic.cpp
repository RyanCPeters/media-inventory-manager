//
// Created by Peter on 3/4/2018.
//

#include "../header_files/classic.h"


Classic::Classic(
                  const std::string &medTitle,
                  int year,
                  int month,
                  std::string dir,
                  std::string actor
                )
            : Movie(MovieType::CLASSIC,
                    medTitle,
                    year,
                    dir,
                    month,
                    actor)
{ } // end Classic::Classic(...)

std::string Classic::getTitle() const {
  return std::string();
}

int Classic::getYear() const {
  return 0;
}

MediaType Classic::getMediaType() const {
  return MediaType::MOVIE;
}

int Classic::compare(const Media &rhs) const {
  return 0;
}

MovieType Classic::getMovieType() const {
  return MovieType::CLASSIC;
}

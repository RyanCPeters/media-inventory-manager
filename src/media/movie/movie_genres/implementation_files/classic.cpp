//
// Created by Peter on 3/4/2018.
//

#include "../header_files/classic.h"


Classic::Classic(
    const std::string &medTitle,
    std::vector<int> year_month,
    std::string dir,
    std::vector<std::string> actor
)
            : Movie( {year_month},{actor},
                     MovieType::CLASSIC,
                     medTitle,
                     // zero'th index of year_month should be the year value
                     year_month[0], dir)
{ } // end Classic::Classic(...)

std::string Classic::getTitle() const {
  return std::__cxx11::string();
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

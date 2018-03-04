//
// Created by Peter on 3/4/2018.
//

#include "../header_files/classic.h"


Classic::Classic(std::string medTitle, int medYear, int movMonth,
                 std::string dir, std::string actor)
            : Movie(MovieType::CLASSIC,std::move(medTitle),
              medYear,month(movMonth),std::move(dir)),actors({std::move
                                                                                 (actor)})
{ }

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

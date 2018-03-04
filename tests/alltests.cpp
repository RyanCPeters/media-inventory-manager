#include <iostream>
#include <media/movie/movie_genre/header_files/classic.h>
#include "hashtable.h"
#include "media/movie/movie.h"
#include "media/movie/interface/icriteria.h"


int main() {
	std::cout << "[+] Running all tests -" << std::endl;

  //run tests here
//  std::cout << "test empty constructor" << std::endl;
//  Movie mm = Movie();
//
//  std::cout << "test sleepless in seattle comedy movie entry" << std::endl;
//  Movie m = Movie('F',"Sleepless in Seattle",1996,"Emily Noah", nullptr);
//  std::cout << "test empty constructor for Classic" << std::endl;
//  Classic classic = Classic();
  
  std::cout << "test Casablanca classic movie entry for Classic class"
            << std::endl;
  Classic classic2 = Classic( "Casablanca", 1942, 8,
                             "Michael Curtiz", "Ingrid Bergman");

	return 0;
}

/*
 * C, 10, Michael Curtiz, Casablanca, Ingrid Bergman 8 1942
 * C, 10, Michael Curtiz, Casablanca, Humphrey Bogart 8 1942
 *
 * */

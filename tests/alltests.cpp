#include <iostream>
#include "../src/media/movie/movie_genres/header_files/classic.h"
#include "../src/hashtable.h"
#include "../src/media/movie/movie.h"
#include "../src/media/movie/interfaces/icriteria.h"

using namespace std;

int main() {
	cout << "[+] Running all tests -" << endl;

  //run tests here
//  cout << "test empty constructor" << endl;
//  Movie mm = Movie();
//
//  cout << "test sleepless in seattle comedy movie entry" << endl;
//  Movie m = Movie('F',"Sleepless in Seattle",1996,"Emily Noah", nullptr);
//  cout << "test empty constructor for Classic" << endl;
//  Classic classic = Classic();
  
  cout << "test classic1 construction: Casablanca classic movie entry for "
      "Classic class" << endl;
  Classic classic1( "Casablanca",
                    1942,
                    8,
                    "Michael Curtiz",
                    "Ingrid Bergman");
  
  cout << "test classic2 construction: Casablanca alter version classic movie"
      " entry for Classic class" << endl;
  Classic classic2( "Casablanca",
                    1942,
                    8,
                    "Michael Curtiz",
                    "Humphrey Bogart");
  
  cout << "test classic1.compareMedia(classic2) "
       << classic1.compareMedia(classic2) << endl
       << "expected output is :: 0 " << endl;
  
  cout << "test classic1.compareMovies(classic2) "
       << classic1.compareMovies(classic2) << endl
       << "expected output is :: 1 " << endl;
  
  cout << "test classic1 construction: Casablanca classic movie entry for "
      "Classic class" << endl;
  Drama drama1( "Casablanca",
                    1942,
                    8,
                    "Michael Curtiz",
                    "Ingrid Bergman");
  
  cout << "test classic2 construction: Casablanca alter version classic movie"
      " entry for Classic class" << endl;
  Drama drama2( "Casablanca",
                    1942,
                    8,
                    "Michael Curtiz",
                    "Humphrey Bogart");
  
  cout << "test classic1.compareMedia(classic2) "
       << classic1.compareMedia(classic2) << endl
       << "expected output is :: 0 " << endl;
  
  cout << "test classic1.compareMovies(classic2) "
       << classic1.compareMovies(classic2) << endl
       << "expected output is :: 1 " << endl;
  
  return 0;
}

/*
 * C, 10, Michael Curtiz, Casablanca, Ingrid Bergman 8 1942
 * C, 10, Michael Curtiz, Casablanca, Humphrey Bogart 8 1942
 *
 * */

//
// Created by R.Peters on 3/5/2018.
//

#ifndef MEDIA_INVENTORY_MANAGER_TEST_GENRES_H
#define MEDIA_INVENTORY_MANAGER_TEST_GENRES_H
#include <iostream>
#include "../src/movie_genres/classic.h"
#include "../src/movie_genres/drama.h"
#include "../src/movie_genres/comedy.h"

using namespace std;


void test_constructors(){

/*
* C, 10, Michael Curtiz, Casablanca, Ingrid Bergman 8 1942
* C, 10, Michael Curtiz, Casablanca, Humphrey Bogart 8 1942
*
* D, 10, Barry Levinson, Good Morning Vietnam, 1988
* D, 10, Gus Van Sant, Good Will Hunting, 2000
*
* F, 10, Gore Verbinski, Pirates of the Caribbean, 2003
* F, 10, Joel Coen, Fargo, 1996
* */
/*
  The items should be sorted as follows:
  
  comedy   (‘F’) by: Title, then Year it released
  dramas   (‘D’) by: Director, then Title
  classics (‘C’) by: Release date, then Major actor
*/
  
  cout << "[+] test classic1 construction: Casablanca classic movie entry for "
      "Classic class" << endl;
  Classic classic1( "Casablanca",
                    1942,
                    8,
                    "Michael Curtiz",
                    "Ingrid Bergman");
  
  cout << "[+] test classic2 construction: Casablanca alter version classic movie"
      " entry for Classic class" << endl;
  Classic classic2( "Casablanca",
                    1942,
                    8,
                    "Michael Curtiz",
                    "Humphrey Bogart");
  
  cout << "[+] test classic1.compareMedia(classic2) "
       << classic1.compareMedia(classic2) << endl
       << "expected output is :: 0 " << endl;
  cout << "[+] test classic2.compareMedia(classic1) "
       << classic2.compareMedia(classic1) << endl
       << "expected output is :: 0 " << endl;
  cout << "[+] test classic1.compareMovies(classic2) "
       << classic1.compareMovies(classic2) << endl
       << "expected output is :: 1 " << endl;
  cout << "[+] test classic1.compareMovies(classic2) "
       << classic2.compareMovies(classic1) << endl
       << "[+] expected output is :: -1 " << endl;
  cout << endl << endl;
  cout << "[+] test drama1 construction: Good Morning Vietnam Drama movie entry "
      "for Drama class" << endl;
  Drama drama1( "Good Morning Vietnam",
                1988,
                8,
                "Barry Levinson");
  
  cout << "[+] test drama2 construction: Good Will Hunting drama movie"
      " entry for Drama class" << endl;
  Drama drama2( "Good Will Hunting",
                2000,
                0,
                "Gus Van Sant",
                "Humphrey Bogart");
  
  cout << "[+] test drama1.compareMedia(drama2) "
       << drama1.compareMedia(drama2) << endl
       << "expected output is :: 0 " << endl;
  cout << "[+] test drama2.compareMedia(drama1) "
       << drama2.compareMedia(drama1) << endl
       << "expected output is :: 0 " << endl;
  cout << "[+] test drama1.compareMovies(drama2) "
       << drama1.compareMovies(drama2) << endl
       << "expected output is :: -1 " << endl;
  cout << "[+] test drama2.compareMovies(drama1) "
       << drama2.compareMovies(drama1) << endl
       << "expected output is :: 1 " << endl;
  cout << endl << endl;
  cout << "[+] test comedy1 construction: Pirates of the Caribbean comedy movie"
      " entry for Comedy class" << endl;
  Comedy comedy1( "Pirates of the Caribbean",
                  2003,
                  8,
                  "Gore Verbinski");
  cout << "[+] test comedy2 construction: Fargo comedy movie"
      " entry for Comedy class" << endl;
  Comedy comedy2( "Fargo",
                  1996,
                  0,
                  "Joel Coen",
                  "Humphrey Bogart");
  cout << "[+] test comedy1.compareMedia(comedy2) "
       << comedy1.compareMedia(comedy2) << endl
       << "expected output is :: 0 " << endl;
  cout << "[+] test comedy2.compareMedia(comedy1) "
       << comedy2.compareMedia(comedy1) << endl
       << "expected output is :: 0 " << endl;
  cout << "[+] test comedy1.compareMovies(comedy2) "
       << comedy1.compareMovies(comedy2) << endl
       << "expected output is :: 1 " << endl;
  cout << "[+] test comedy2.compareMovies(comedy1) "
       << comedy2.compareMovies(comedy1) << endl
       << "expected output is :: -1 " << endl;
};



#endif //MEDIA_INVENTORY_MANAGER_TEST_GENRES_H

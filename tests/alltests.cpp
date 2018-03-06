#include <iostream>
#include <iomanip>
#include "test_genres.h"
#include "hashtabletest.h"

using namespace std;
int test_number = 1;

void create_break_between_different_tests(){
  cout << "begin test Number " << test_number << endl;
  cout << setw(80) << setfill('~') << "." << endl;
  ++test_number;
}


int main() {
	cout << "[+] Running all tests -" << endl;
  
  //run tests here
  create_break_between_different_tests();
  hashTableTest();
  
  
  create_break_between_different_tests();
  test_constructors();
  
//  cout << "test empty constructor" << endl;
//  Movie mm = Movie();
//
//  cout << "test sleepless in seattle comedy movie entry" << endl;
//  Movie m = Movie('F',"Sleepless in Seattle",1996,"Emily Noah", nullptr);
//  cout << "test empty constructor for Classic" << endl;
//  Classic classic = Classic();

  
  return 0;
}


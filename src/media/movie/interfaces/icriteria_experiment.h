//
// Created by R.Peters on 3/4/2018.
//

#ifndef MEDIA_INVENTORY_MANAGER_ICRITERIA_EXPERIMENT_H
#define MEDIA_INVENTORY_MANAGER_ICRITERIA_EXPERIMENT_H

#include <string>
#include <vector>

class Criteria2 {
public:
  
  
  /*

  The items should be sorted as follows:

  comedy   (‘F’) by: Title, then Year it released
  dramas   (‘D’) by: Director, then Title
  classics (‘C’) by: Release date, then Major actor

*/
  union {
    
    struct comedy {
      /**
       * a string holding the title of the comedy movie
       */
      std::string primary;
      
      /**
       * an int representing the year the comedy movie was released
       */
      int secondary;
  
      comedy()=default;
      explicit comedy(std::string pr):primary(std::move(pr)){};
      explicit comedy(const int& sc):secondary(sc){};
      comedy(std::string pr, const int& sc)
      :primary(std::move(pr)),secondary(sc){};
    };
    
    struct drama {
      /**
       * a string holding the name of the person who directed the drama movie
       */
      std::string primary;
      
      /**
       * a string holding the title of the drama movie
       */
      std::string secondary;
  
      drama()=default;
      
      /*
       The single argument constructors for drama genre movies
       primary/secondary criteria are both strings, and thus can't easily
       be inferred which one is the desired target of the single arg  ctor
       */
//      explicit drama(std::string pr):primary(std::move(pr)){};
//      explicit drama(std::string sc):secondary(std::move(sc)){};
      drama(std::string pr, std::string sc)
      :primary(std::move(pr)),secondary(std::move(sc)){};
    };
    
    struct classic {
      /**
       * an array of int containing the year then month in which the classic
       * movie was released.
       *
       *    so, classic.primary[0] would return the year of release.
       *    and, classic.primary[1] would return the month of release.
       */
      std::vector<int> primary;
      
      /**
       * a vector<string> holding the name of the
       * major staring actor(s) in the movie.
       */
      std::vector<std::string> secondary;
      
      classic()=default;
      explicit classic(std::vector<int> pr):primary(std::move(pr)){};
      explicit classic(std::vector<std::string> sc):secondary(std::move(sc)){};
      classic(std::vector<int> pr, std::vector<std::string> sc)
          :primary(std::move(pr)),secondary(std::move(sc)){};
      
    };
    
  };
  
private:
  Criteria2();
};

#endif //MEDIA_INVENTORY_MANAGER_ICRITERIA_EXPERIMENT_H

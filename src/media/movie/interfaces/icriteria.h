#ifndef MEDIA_INVENTORY_MANAGER_COMPARABLE_INTERFACE_H
#define MEDIA_INVENTORY_MANAGER_COMPARABLE_INTERFACE_H

#include <string>
#include <vector>



class Criteria {
public:
  
  /*
  
  The items should be sorted as follows:

    comedy   (‘F’) by: Title, then Year it released
    dramas   (‘D’) by: Director, then Title
    classics (‘C’) by: Release date, then Major actor
 
 */

/**
 * The internal data types of this union are named according to their
 * corresponding movie genre, and abstracted primary sorting criteria
 */
  union Primary {

    // empty initializer value
    char c;
    
    /*Both comedy and drama use a string, so we can just combine both use cases
     * into a single value
       Comedy:
       the comedy's title as a single or multi-word string
    
       Drama:
       The director's name in the drama, saved as a single string in the
       form of :
                "First [Middle] Last"
       Note that the middle name inside of the square brackets  []  is
       optional, and shall only be included where the official inventory input
       file includes it.
    */
    std::string com_dram;
    
    
    // Classic:
    std::vector<int> classic_date; // the year the classic was released
    
    Primary(): c(' '){}
  
    explicit Primary(std::string comdram):com_dram(std::move(comdram)){}
  
    explicit Primary(std::vector<int> date)
        :classic_date(std::move(date))
    {}
    
    ~Primary() = default;
  
  };

/**
 * The internal data types of this union are named according to their
 * corresponding movie genre, and abstracted secondary sorting criteria
 */
  union Secondary {
  
    // empty initializer value
    char c;
    
    // Comedy:
    int comedy_year; // the year the comedy was released
    
    /*Both classics and drama use a string, so we can just combine both use
     * cases into a single value
     
       Drama:
       the drama's title as a single or multi-word string
    
       Classic:
       the leading actor's name in the classic, saved as a single string in the
       form of :
                "First [Middle] Last"
       Note that the middle name inside of the square brackets  []  is
       optional, and shall only be included where the official inventory input
       file includes it.
    */
    std::vector<std::string> dram_classic;
    
    Secondary():c(' '){}
  
    explicit Secondary(int year):comedy_year(year){}
  
    explicit Secondary(std::vector<std::string> director_or_actor)
        :dram_classic({std::move(director_or_actor)})
    {}
    
    explicit Secondary(const Secondary& othr){
    
    }
  
    ~Secondary() = default;
    
  };
  
  // initializing primary/secondary objects.
  Primary prim;
  Secondary sec;
  
  Criteria(Primary pr, Secondary sc): prim(std::move(pr)), sec(std::move(sc)){};
  
private:
  Criteria();

};



#endif //MEDIA_INVENTORY_MANAGER_COMPARABLE_INTERFACE_H

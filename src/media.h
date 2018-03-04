
#ifndef MEDIA_INVENTORY_MANAGER_MEDIA_H
#define MEDIA_INVENTORY_MANAGER_MEDIA_H

#include <iosfwd>
#include <string>

enum class MediaType : short { MOVIE = 0, MUSIC = 1, USB = 2 };


class Media {
public:
  
  // declaring our class scope state members
  MediaType medType;
  std::string title{std::string()};
  int year{2018};
  
  Media(const MediaType& mtype, std::string ttl, const int& yr)
        :medType(mtype),title(std::move(ttl)), year(yr){};
  
  
  // declaring our virtual functions
  
//  virtual std::ostream& operator<<(std::ostream& os, const Media&
//  printMe);
  
  virtual std::string getTitle() const = 0;
  
  virtual int getYear() const = 0;
  
  virtual MediaType getType() const = 0;
  
  virtual int compare(const Media& rhs) const = 0;
  
};

#endif //MEDIA_INVENTORY_MANAGER_MEDIA_H


#ifndef MEDIA_INVENTORY_MANAGER_MEDIA_H
#define MEDIA_INVENTORY_MANAGER_MEDIA_H

#include <iosfwd>
#include <string>

enum class MediaType : short { movie = 0, music = 1, dvd = 2, empty = 3 };

class Media {
private:
  // declaring our class scope state members
  MediaType medType;
  std::string title{std::string()};
  int year{2018};


public:
  Media(const MediaType& mtype, std::string ttl, const int& yr )
        :medType(mtype),title(std::move(ttl)), year(yr){};
  
  // declaring our virtual functions
  
//  virtual std::ostream& operator<<(std::ostream& os, const Media&
//  printMe);
  
  std::string getTitle() const {
    return title;
  }
  
  int getYear() const {
    return year;
  }
  
  MediaType getMediaType() const {
    return medType;
  }
  
  virtual int compareMedia(const Media &rhs) const {
    return (medType < rhs.getMediaType())? (short)-1
          :(medType > rhs.getMediaType())? (short)1
          :(short) 0;
  }
  

};

#endif //MEDIA_INVENTORY_MANAGER_MEDIA_H

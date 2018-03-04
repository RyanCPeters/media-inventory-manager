#### A quick note on the folder structure of the movie files

The folder structure for our media files that are specific to movies is structured to provide a sort of physical representation of the inheritance heirarchy relating our different genres and interaces to the movie base class.

Currently we have a structure that looks like this:
        
```
        
          interfaces -- { icriteria.h }
      /                                        
Movie                  header_files ---------- { comedy.h,   drama.h,   classic.h } 
      \               /                         
        movie_genres                              
                      \                     
                       implementation_files -- { comedy.cpp, drama.cpp, classic.cpp }
                                               
                                                  
```

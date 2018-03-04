#### A quick note on the folder structure of the movie files

The folder structure for our media files that are specific to movies is structured to provide a sort of physical representation of the inheritance heirarchy relating our different genres and interaces to the movie base class.

Currently we have a structure that looks like this:
        
```
        
        interface(s) -- icriteria.h                comedy.h
      /                                         /
Movie                    --------- header_files -- drama.h
      \                /                        \
        movie_genre(s)                             classic.h
                       \
                        \                          comedy.cpp
                         \                      /
                           implementation_files -- drama.cpp
                                                \
                                                   classic.cpp
```

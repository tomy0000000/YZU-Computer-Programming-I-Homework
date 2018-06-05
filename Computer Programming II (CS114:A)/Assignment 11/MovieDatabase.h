//
//  MovieDatabase.h
//  Hw 11
//  Object Oriented Vieshow Cinemas Taipei QSquare system
//
//  Created by Tomy Hsieh on 2018/6/3.
//  Copyright © 2018年 Tomy Hsieh. All rights reserved.
//

#ifndef MovieDatabase_h
#define MovieDatabase_h

#include "Movie.h"
#include "Vector.h"

class MovieDatabase {
public:
  MovieDatabase();  // calls loadMovies()
  ~MovieDatabase(); // calls saveMovies()

  int getNumMovies();
  Movie getMovie(
      int movieCode); // return the movie object containing specified movieCode
  void setMovieSeat(int movieCode, int dateCode, int sessionTimeCode, int row,
                    int col);
  void displaySessionTimes(char movieNames[][60], char availableDates[][12]);

private:
  vector<Movie> movies; // vector of the movies
  void loadMovies();    // loads movies from the file Movies.dat
  void saveMovies();    // stores movies into the file Movies.dat
};

#endif

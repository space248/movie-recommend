#pragma once

#include <vector>
#include "movie.h"

class MovieManager {
private:
    std::vector<Movie> movies;

public:
    MovieManager();
    void addMovie(const Movie& m);
    void printAllMovies() const;
};

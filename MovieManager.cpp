#include "MovieManager.h"
#include <algorithm>
#include <iostream>

void MovieManager::addMovie(const Movie& movie) {
    movies.push_back(movie);
}

Movie* MovieManager::findByTitle(const std::string& title) {
    for (Movie& m : movies) {
        if (m.getTitle() == title) return &m;
    }
    return nullptr;
}

void MovieManager::sortByRating() {
    std::sort(movies.begin(), movies.end());
}

void MovieManager::printAll() const {
    if (movies.empty()) {
        std::cout << "등록된 영화가 없습니다.\n";
        return;
    }
    for (const Movie& m : movies) {
        std::cout << m << std::endl;
    }
}
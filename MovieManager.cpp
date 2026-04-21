#include "MovieManager.h"
#include <iostream>

MovieManager::MovieManager() {
    // 기본 생성자 
}

void MovieManager::addMovie(const Movie& m) {
    movies.push_back(m); // 벡터에 영화 밀어넣기
}

void MovieManager::printAllMovies() const {
    // 나중에 연산자 오버로딩 구현 후 채울 부분
}
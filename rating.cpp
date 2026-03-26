#include "rating.h"

Rating::Rating() : userId(0), movieId(0), score(0.0) {}

Rating::Rating(int uId, int mId, double s) : userId(uId), movieId(mId) {
if (s >= 0.0 && s <= 5.0) {
score = s;
} else {
std::cout << "잘못된 점수입니다 점수 재설정 0.0" << std::endl;
score = 0.0;
}
}

int Rating::getUserId() const { return userId; }
int Rating::getMovieId() const { return movieId; }
double Rating::getScore() const { return score; }

void Rating::display() const {
std::cout << "User " << userId << " rated Movie " << movieId << " : " << score << std::endl;
}
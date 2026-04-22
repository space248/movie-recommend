#include "Movie.h"

Movie::Movie(const std::string& title, int year, double rating)
    : title(title), year(year), rating(rating) {}

std::string Movie::getTitle() const { return title; }
int Movie::getYear() const { return year; }
double Movie::getRating() const { return rating; }

bool Movie::operator==(const Movie& o) const {
    return title == o.title && year == o.year;
}
bool Movie::operator!=(const Movie& o) const { return !(*this == o); }

bool Movie::operator<(const Movie& o) const {
    if (rating != o.rating) return rating < o.rating;
    return title < o.title;
}
bool Movie::operator>(const Movie& o) const { return o < *this; }
bool Movie::operator<=(const Movie& o) const { return !(o < *this); }
bool Movie::operator>=(const Movie& o) const { return !(*this < o); }

std::ostream& operator<<(std::ostream& os, const Movie& m) {
    os << "[" << m.title << "] " << m.year << "년, ★" << m.rating;
    return os;
}
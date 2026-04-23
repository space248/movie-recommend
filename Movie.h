#pragma once
#include <string>
#include <iostream>

class Movie {
private:
    std::string title;
    int year;
    double rating;

public:
    Movie(const std::string& title, int year, double rating);

    std::string getTitle() const;
    int getYear() const;
    double getRating() const;

    bool operator==(const Movie& o) const;
    bool operator!=(const Movie& o) const;
    bool operator<(const Movie& o) const;
    bool operator>(const Movie& o) const;
    bool operator<=(const Movie& o) const;
    bool operator>=(const Movie& o) const;

    friend std::ostream& operator<<(std::ostream& os, const Movie& m);
};
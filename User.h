#pragma once
#include <string>
#include <iostream>

class User {
private:
    std::string name;

public:
    User(const std::string& name);
    std::string getName() const;

    bool operator==(const User& o) const;
    friend std::ostream& operator<<(std::ostream& os, const User& u);
};
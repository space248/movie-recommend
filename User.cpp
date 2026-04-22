#include "User.h"

User::User(const std::string& name) : name(name) {}

std::string User::getName() const { return name; }

bool User::operator==(const User& o) const {
    return name == o.name;
}

std::ostream& operator<<(std::ostream& os, const User& u) {
    os << "[User] " << u.name;
    return os;
}
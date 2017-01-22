#include <stdexcept>
class BadLengthException : public std::length_error{
    public:
    BadLengthException(const int &n):std::length_error(to_string(n)) {}
};

#include "02_palindrome.h"
#include <string>

namespace reverse_string {

    std::string reverse_string(std::string input) {
        return std::string{input.rbegin(), input.rend()};
    }

}  // namespace reverse_string

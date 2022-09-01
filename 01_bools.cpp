#include "01_bools.h"

namespace leap {

    bool is_leap_year(int year) {
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            return true;
        } else { return false; }
    }

}  // namespace leap

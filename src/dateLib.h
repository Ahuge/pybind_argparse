//
// Created by alex on 19/02/17.
//

#ifndef FIBONACCI_DATELIB_H
#define FIBONACCI_DATELIB_H
#define DATELIB_VERSION_INFO "0.0.2"

#include <string>
#include <ctime>

namespace date {
    std::string getDateStr() {
        time_t t = time(0);
        struct tm * now = localtime( & t);
        std::string s = "";

        s += std::to_string(now->tm_year + 1900) + "-";
        s += std::to_string(now->tm_mon + 1) + "-";
        s += std::to_string(now->tm_mday);
        return s;
    }
}

#endif //FIBONACCI_DATELIB_H

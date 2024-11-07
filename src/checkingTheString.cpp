#include "../include/checkingTheString.h"

bool checkingTheString(const std::string &str) {
    int open = 0, close = 0;
    
    if (str.size() == 0) return true;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(') open += 1;
        else if (str[i] == ')') close += 1;

        if (close > open) break;
    }

    return open == close;
}

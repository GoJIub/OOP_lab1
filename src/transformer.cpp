#include "../include/transformer.h"

string transformer(string text, int n, char oldValue, char newValue) {
    if (n < 1) return text;
    int cnt {0};
    string newText;
    for (auto e: text) {
        char temp = e;
        if (e == oldValue) {
            cnt++;
            if (cnt % n == 0) temp = newValue;
        }
        newText.push_back(temp);
    }
    return newText;
}
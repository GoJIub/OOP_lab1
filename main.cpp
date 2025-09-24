#include <bits/stdc++.h>
#include "include/transformer.h"
using namespace std;


int main() {

    int n;
    char oldValue, newValue;
    string text;

    cout << "Enter parameters\n";
    cout << "n: ";
    cin >> n;
    cout << "Old value: ";
    cin >> oldValue;
    cout << "New value: ";
    cin >> newValue;
    cout << "Text: ";
    cin.ignore();
    getline(cin, text);

    cout << transformer(text, n, oldValue, newValue);
}
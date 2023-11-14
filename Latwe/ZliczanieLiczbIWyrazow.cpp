/*
    Kod zadania:    KC010
    Link:           https://pl.spoj.com/problems/KC010/
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {

    int numbers = 0;
    int words = 0;

    string str;

    while (getline(cin, str)) {
        int len = str.length();
        for (int i = 0; i < len; i++) {
            if (isalpha(str[i]) && (isspace(str[i + 1]) || str[i + 1] == '\0')) words++;
            if (isdigit(str[i]) && (isspace(str[i + 1]) || str[i + 1] == '\0')) numbers++;
        }

        cout << numbers << " " << words << endl;
        numbers = words = 0;
    }

}
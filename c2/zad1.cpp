
#include <iostream>
#include <string>

using namespace std;

int main() {

    string s;
    getline(cin, s);

    char min = 127, max = -127;
    for(char c : s) {
        if (c == 0) {continue;}
        if (c < min) { min = c; }
        if (c > max) { max = c; }
    }

    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    return 0;
}
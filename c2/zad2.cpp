
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string edited, removed, added;
    getline(cin, edited);
    cin >> removed;
    cin >> added;

    while (true) {
        int pos = edited.find(removed);
        if (pos == string::npos) { break; }
        edited.replace(pos, removed.size(), added);
    }

    cout << edited << ';' << removed << ';' << added << endl;

    return 0;
}
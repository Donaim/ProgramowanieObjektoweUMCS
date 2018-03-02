
#include <iostream>
#include <string>
#include <ostream>
#include <fstream>


using namespace std;

int main() {

    string search;
    cout << "search=";
    getline(cin, search);

    ifstream in{"zad4.txt", ios_base::in};
    string content{};
    // content.reserve( rozmiar pliku )
    while (!in.eof()) {
        content += (char)in.get();
    }

    int find = -1;
    int count = 0;
    while(true) {
        find = content.find(search, find + 1);
        if (find == string::npos) { break; }
        else { count++; }
    }

    cout << "ilosc wystapien=" << count << endl;

    return 0;
}
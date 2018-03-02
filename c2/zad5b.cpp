
#include <iostream>
#include <string>
#include <ostream>
#include <fstream>
#include <sstream>


#include <stdexcept>


using namespace std;

int main() {
    ifstream in{"c2/zad5b.txt", ios_base::in};
    // content.reserve( rozmiar pliku )
    while (!in.eof()) {
        string line{};
        getline(in, line);
        stringstream ss{line};
        
        int sum = 0;
        int pos = 0;
        while (!ss.eof()) {
            char c = ss.get();
            if (isspace(c)) { continue; }
            pos++;
            cout << '[' << pos << ']' << '\'' << c << '\'' << endl;

            if (c != '+' && c != '-') 
            {
                if (pos == 1) {
                    cout << "to beg!" << endl;
                    // if (isdigit(c)) { in.seekg(ios_base::beg); }
                }
                // if (pos != 1) // nie na poczatku pliku
                // { throw std::runtime_error("unexpected char!!"); }
                // else {
                //     cout << '\'' << c << '\'' << endl;
                //     in.seekg(ios_base::beg);
                // }
            }

            int x;
            ss >> x;
            sum += (c == '-') ? -x : x; 
        }

        cout << "sum: " << sum << endl;
    }


    return 0;
}
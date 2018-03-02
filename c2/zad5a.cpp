
#include <iostream>
#include <string>
#include <ostream>
#include <fstream>
#include <sstream>


using namespace std;

int main() {
    ifstream in{"zad5a.txt", ios_base::in};
    // content.reserve( rozmiar pliku )
    while (!in.eof()) {
        string line{};
        getline(in, line);
        stringstream ss{line};
        
        int sum = 0;
        while (!ss.eof()) {
            int x;
            ss >> x;
            sum += x;
        }
        cout << "sum: " << sum << endl;
    }


    return 0;
}
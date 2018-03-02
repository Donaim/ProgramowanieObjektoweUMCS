
#include <iostream>
#include <string>
#include <ostream>
#include <fstream>


using namespace std;

int main() {

    string filepath;
    cout << "filepath=";
    getline(cin, filepath);
    ofstream ofs{filepath, ios_base::out};

    string tmp{};
    int count = 0;
    while (true) {
        cin >> tmp;
        if (tmp.size() < 1) { break; }

        count += tmp.size();
        if (count < 20) {
            ofs << ' ';
        } 
        else {
            count = tmp.size();
            ofs << '\n';
        }
        ofs << tmp;
    }

    ofs.close();
    cout << "end" << endl;

    return 0;
}
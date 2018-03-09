/* mandryl */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class File {
    string path;
    const string& _get_sentence(int index) {
        ifstream in{this->path, ios_base::in};
        string content{""};
        while(!in.eof()) {
            content += in.get();
        }
        in.close();
        
        string& tmp = *new string{""};
        int count = 0;
        char cprev = '\0', c = '\0';

        for (int i = 0; i <= content.length(); i++) {
            cprev = c;
            c = content[i];

            
            if (cprev == '.' && (isspace(c) || (int)c == -1)) 
            {
                count++;
                if (count == index) 
                {
                    return tmp; 
                }
                else { tmp = ""; }
            }
            else {
                tmp += c;
            }
        }

        return *new string{""};
    }
public:
    File() : path{""} {}
    void init_path(const string& path) {
        this->path = path;
    }
    const string& get_sentence(int index) {
        if (index <= 0) { return *new string{""}; }
        try {
            return this->_get_sentence(index);
        }
        catch (const ifstream::failure& e) {
            return *new string{""};
        }
    }
};

int main() {

    File f{};
    f.init_path("c3\\kartkowka.test.txt");
    cout << f.get_sentence(3) << endl;



    return 0;
}
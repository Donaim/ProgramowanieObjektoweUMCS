#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include <cctype>

using namespace std;

class Stworek {
public:
    virtual void powiedz(string & what) = 0;
    virtual ~Stworek() { }
};

class StworekJakajacy : public Stworek {
public:
    virtual void powiedz(string & what) override {
        cout << what[0] << what[0];
        cout << what << endl;
    }
};

class StworekBezR : public Stworek {
public:
    virtual void powiedz(string & what) override {
        for (int i = 0; i < what.size(); i++) {
            if (tolower(what[i]) == 'r') { cout << '1'; }
            else { cout << what[i];}
        }
        cout << endl;
    }
};

class StworekPomijajacy : public Stworek {
    string * filter;
    int filter_size;
    static bool startswith(const char * base, string o) {
        int base_len = strlen(base);
        if (base_len < o.size()) { return false; }

        for (int i = 0; i < o.size(); i++) {
            if (base[i] != o[i]) { return false; }
        }
        return true;
    }
    int skip(const char * str) {
        for (int k = 0; k < filter_size; k++) {
            if (startswith(str, filter[k])) { return filter[k].size() + 1; }
            else { return 0; }
        }
    }
public:

    virtual void powiedz(string & what) override {
        for (int i = 0; i < what.size(); i++) {
            int sk = skip(what.c_str() + i);
            if (sk) { i += sk; }
            else { cout << what[i]; }
        }

        cout << endl;;
    }

    void dodaj(string what) {
        string * newf = new string[filter_size + 1];

        for (int i = 0; i < filter_size; i++) {
            newf[i] = string(filter[i]);
        }
        delete [] filter;

        filter = newf;
        filter[filter_size] = string(what);
        filter_size++;
    }

    ~StworekPomijajacy() {
        delete [] filter;
    }
};


int main() {

    StworekPomijajacy p{};
    p.dodaj("ko");
    p.dodaj("dy");

    string to_say = "krokodyl";
    p.powiedz(to_say);

    StworekJakajacy j{};
    to_say = "krokoRodyl";
    j.powiedz(to_say);

    StworekBezR r{};
    to_say = "krokoRodyl";
    r.powiedz(to_say);

    return 0;
}
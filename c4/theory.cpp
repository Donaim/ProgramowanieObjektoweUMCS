
#include <iostream>
#include <cstdlib>

using namespace std;

class Cat {
    string name;
public:
    Cat() : name{"Unknown"} {
        std::cout << "constructed" << endl;
    }

    ~Cat() {
        std::cout << "destructed" << endl;
    }

    void say_hello() {
        std::cout << "My name is " << this->name << ". Meow" << endl;
    }
};
class SomeCollection {
    int * arr;
public:
    SomeCollection(int size) {
        arr = new int[size]; // dynamiczna pamiec! 
    }

    ~SomeCollection() {
        delete [] arr; // zwalniamy dynamiczna pamiec, bo pointery samodzielnie sie nie zwalniaja!
    }
};


void destructor() {
    cout << "start" << endl;
    
    {
        Cat ph{};
    }

    cout << "end" << endl;
}
void dynamic_malloc() {
    Cat * p = (Cat * ) malloc(sizeof(Cat));
    // Note that constructors and destructors are not called
}
void dynamic_new() {
    Cat * p = new Cat{}; // this will call constructor and reserve memory for object
    delete p; // this will call destructor and free memory
    // jesli nie uzyjemy delete to po zakonczeniu programu system operacyjny zwolni pamiec, ale nie wywola destructor!
}

int main() {
    // destructor();
    // dynamic_malloc();
    // dynamic_new();


    return 0;
}
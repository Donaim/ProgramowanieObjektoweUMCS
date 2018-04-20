#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    virtual void additional_identity() { }
public:
    void ident() {
        cout << "Name: " << name;
        additional_identity();
        cout << endl;
    }
};

class Teacher : public Person {
private:
    string title;
public:
    Teacher() : title{"unknown"} {}

    virtual void additional_identity() override {
        cout << ' ' << "Title: " << title;
    }
};

class Student : public Person {
public:
    int semester;
    Student() : semester(0) {}
    
    virtual void additional_identity() override {
        cout << ' ' << "Semester: " << semester;
    }
};



int main() {

    Person * p = new Student;

    p->ident();

    return 0;
}
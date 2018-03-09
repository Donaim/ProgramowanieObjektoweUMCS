
#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;

class User {
protected:
    string login;
    string password;
public:
    User(const string& login, const string& password) : login{login}, password{password} {

    }

    bool authorize(const string& login, const string& password) {
        return login == this->login && password == this->password;
    }
};
class Student : public User {
protected:
    const int semester;
public:
    Student(const string& login, const string& password, int semester) : semester{semester}, User{login, password} {

    }
};

class Subject {
public:
    static const int MAX_AVAILABLE_SPACE = 100;
private:
    int m_students_count = 0;
protected:
    const string name;
    const int max_students_count;
    Student ** students; 
public:
    Subject(const string& name, int max_students_count) : name{name}, max_students_count{max_students_count}, students{new Student*[max_students_count]} {
        if (max_students_count > MAX_AVAILABLE_SPACE) { throw new runtime_error{"max_student_count has to be <= 100!"}; }
    }
    Subject(const Subject& me) : name{me.name}, max_students_count{me.max_students_count}, students{new Student*[max_students_count]} {
        
    }

    int students_count() const { return m_students_count; }
    bool add_student(Student& s) {
        if (m_students_count >= max_students_count) { return false; }
        students[m_students_count++] = &s;
        return true;
    }
    Student * contains(int index, bool * re) {
        if (index >= m_students_count) { *re = false; return nullptr; }
        *re = true;
        return students[index];
    }
};

int main() {
    return 0;
}
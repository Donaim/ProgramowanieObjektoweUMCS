
#include <stdexcept>

class A {
private:
    int ** arr;
    int size_;
public:
    A(int size) : size_{size}, arr{new int*[size]} 
    {
        for (int i = 0; i < size_; i++) {
            arr[i] = nullptr;
        }
    }
    A(const A& o) : A(o.size_) {
        for (int i = 0; i < o.size_; i++) {
            if (o.arr[i] != nullptr) {
                this->arr[i] = new int;
                *this->arr[i] = *o.arr[i];
            }
        }
    }

    int & get(size_t index) {
        if (index >= this->size_) { throw std::runtime_error{"Index was outside the bounds of the array!"}; }
        
        if (arr[index] == nullptr) {
            arr[index] = new int(0);
        }

        return *(arr[index]);
    }

    ~A() {
        for (int i = 0; i < size_; i++) {
            if (arr[i] != nullptr) { 
                delete arr[i];
            }
        }
        delete [] arr;
    }
};

// TEST //

#include <iostream>
using namespace std;
int main() {

    {
        A a(10000000);
        cout << a.get(2) << endl;

        A * b = new A(a);
        cout << b->get(7) << endl;
        delete b;
    }

    return 0;
}
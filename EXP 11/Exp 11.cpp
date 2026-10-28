
#include <iostream>
using namespace std;

// Class Template
template <class T>
class Demo {
    T a, b;

public:
    Demo(T x, T y) {
        a = x;
        b = y;
    }

    void display() {
        cout << "First value: " << a << endl;
        cout << "Second value: " << b << endl;
    }
};

// Function Template
template <class T>
T add(T x, T y) {
    return x + y;
}

int main() {
    Demo<int> d1(10, 20);
    cout << "Class Template:" << endl;
    d1.display();

    cout << "\nFunction Template:" << endl;
    cout << "Sum = " << add<int>(10, 20) << endl;
    cout << "Sum = " << add<double>(5.5, 2.5) << endl;

    return 0;
}

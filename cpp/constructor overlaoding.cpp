// #include <iostream>
// using namespace std;

// class Number {
//     int value;

// public:
//     Number(int v) : value(v) {}

//     // Declared return type: Number
//     Number operator+() {
//         // Explicitly returns a Number object
//         return Number(+value); 
//     }

//     void display() { cout << value << endl; }
// };

// int main() {
//     Number n(20);
//     Number result = +n; 
//     // +n; n.display();
//     result.display(); // Output: 20
// }


// #include <iostream>
// using namespace std;

// class Number {
//     int value;

// public:
//     Number(int v) : value(v) {}

//     // Declared return type: int
//     int operator+() {
//         return +value; // +value is an int -> matches int directly
//     }
// };

// int main() {
//     Number n(20);
//     int x = +n; // x receives raw int 20
//     cout << x << endl; // Output: 20
// }



// #include <iostream>
// using namespace std;

// class Number {
//     int value;

// public:
//     Number(int v) : value(v) {}

//     Number operator+() {
//         return Number(value < 0 ? -value : value);
//     }

//     void display() {
//         cout << value << endl;
//     }
// };

// int main() {
//     Number a(-50);

//     Number b = +a;
// int c = -10;

// cout << +c;
//     b.display();
// }


// class Account {
//     int balance;

// public:
//     Account(int b) : balance(b) {}

//     Account& operator++() {
//         balance += 1;
//         return *this;
//     }

//     void display() {
//         cout << "Balance: " << balance << endl;
//     }
// };


// #include <iostream>
// using namespace std;

// class Number {
//     int value;

// public:
//     Number(int v) {
//         value = v;
//     }

//     void operator+() {
//         value = -value;
//     }

//     void display() {
//         cout << "Value: " << value << endl;
//        //  value = (value < 0) ? -value : value;
//     }
// };

// int main() {

//     Number n(50);

//     +n;

//     n.display();

//     return 0;
// }



// #include <iostream>
// using namespace std;

// class Number {
//     int value;

// public:
//     Number(int v) {
//         value = v;
//     }

//     friend Number operator+(Number n);

//     void display() {
//         cout << "Value: " << value << endl;
//     }
// };

// Number operator+(Number n) {

//     return Number(+n.value);
// }

// int main() {

//     Number a(25);

//     Number result = +a;

//     result.display();

//     return 0;
// }



// #include <iostream>
// using namespace std;

// class Student {
//     int age;

// public:

//     Student(int a) {
//         age = a;
//     }

//     void show() {

//         cout << "Current object address: " << this << endl;

//         cout << "Age: " << this->age << endl;
//     }
// };

// int main() {

//     Student s1(18);
//     Student s2(20);

//     cout << "S1 address: " << &s1 << endl;
//     s1.show();

//     cout << "\nS2 address: " << &s2 << endl;
//     s2.show();

//     return 0;
// }


// class Student {
// private:
//     int age = 20;

// public:
//     int* getAgeAddress() {
//         return &age;
//     }
// };

// int main() {
//     Student s1;

//     cout << *s1.getAgeAddress(); // 20
// }



#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v) {
        value = v;
    }

    // Prefix increment
    Number& operator++() {
        ++value;
        return *this;
    }

    // Postfix increment
    Number operator++(int) {
        Number old(*this);
        value++;
        return old;
    }

    void display() {
        cout << value << endl;
    }
};

int main() {
    Number a(10);

    ++a;
    a.display();  // 11

    a++;
    a.display();  // 12
}


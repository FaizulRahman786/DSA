// // #include <iostream>
// // using namespace std;

// // class demo{
// //     int a,b;

// //     public:
// //     demo(int x , int y){
// //         a = x;
// //         b = y;
// //         cout << "constructor" <<endl;
// //     }
// //     void show(){
// //         cout << a << " " << b << endl;

// //     }

// //     void operator -(){
// //         a = -a;
// //         b = -b;
// //     }
// // };

// // int main() {

// // demo d(-10,20);

// // d.show();
// // -d;
// // d.show();

// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // class Counter {
// // public:
// //     int value;

// //     Counter(int v) : value(v) {}

// //     Counter& operator++() {
// //         ++value;
// //         return *this;
// //     }
// // };

// // int main() {
// //     Counter c(10);

// //     Counter& result = ++c;

// //     result.value = 100;

// //     cout << c.value << endl;

// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;

// // class Counter {
// // private:
// //     int value;

// // public:
// //     Counter(int v) : value(v) {}

// //     Counter& operator++() {
// //         ++value;
// //         return *this;
// //     }

// //     void display() const {
// //         cout << value << endl;
// //     }
// // };

// // int main() {
// //     Counter c(10);

// //     ++c;
// //     c.display();

// //     return 0;
// // }

#include <iostream>
using namespace std;

class student
{
    int a, b;
    public:
    student(int a, int b)
    {
        this->a = a;
        this->b = b;
        cout << a << " " << b << endl;
    }

    int sum(int a, int b)
    {
        return a + b;
    }

    int operator+()
    {
        int c = b * b;
    }
};
int main()
{
    student s(2,4);
   cout << s.sum(3,5)<<endl;
    +s;
   cout << s.sum(8,5);

    return 0;
}


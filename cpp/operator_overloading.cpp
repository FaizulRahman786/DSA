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

// #include <iostream>
// using namespace std;

// class student
// {
//     int a, b;
//     public:
//     student(int a, int b)
//     {
//         this->a = a;
//         this->b = b;
//         cout << a << " " << b << endl;
//     }

//     int sum(int a, int b)
//     {
//         return a + b;
//     }

//     int operator+()
//     {
//         int c = b * b;
//     }
// };
// int main()
// {
//     student s(2,4);
//    cout << s.sum(3,5)<<endl;
//     +s;
//    cout << s.sum(8,5);

//     return 0;
// }


#include <iostream>
using namespace std;

class node {
public: 
    int data;
    node* next;
    
    node(int val) {
        data = val;
        next = nullptr;
    }
};

class list {
    node* head;
    node* tail;

public:
    list() {
        head = tail = nullptr;
    }

    // Fix 1: Changed return type to void
    void push_front(int value) {
        node* newnode = new node(value);
        if (head == nullptr) {
            head = tail = newnode;
        }
        else {
            newnode->next = head;
            head = newnode;
        }
    } // Fix 2: Added missing closing brace for push_front

    void print() {
        node* temp = head;
        // Fix 3: Changed 'null' to 'nullptr'
        while (temp != nullptr) {
            // Fix 4: Print temp->data instead of data->next
            cout << temp->data << " -> ";
            // Fix 5: Move temp forward correctly without modifying links
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }


    void push_back(int value) {
        node* newnode = new node(value);
        if (head == nullptr) {
            head = tail = newnode;
        }
        else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    void pop_front() {
        if (head == nullptr) {
            cout << "nothing to pop";
        }
        else {
            node* temp = head;
            head = head->next;
            if (head == nullptr) {
                tail = nullptr;
            }
            delete temp;
        }
    }

    void pop_back() {
        if (head == nullptr) {
            cout << "nothing to pop";
        }
        else if (head == tail) {
            delete head;
            head = tail = nullptr;
        }
        else {
            node* temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = nullptr;
        }
    }
};

int main() {
    list myList;
    myList.push_front(10);
    myList.push_front(20);
    myList.push_front(30);
    
    myList.print(); // Output will be: 30 -> 20 -> 10 -> NULL
    return 0;
}

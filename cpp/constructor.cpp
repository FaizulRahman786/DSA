// #include <iostream>
// #include <string>
// using namespace std;

// class Student
// {
// public:
//     int roll;
//     string name;

//     Student()
//     {
//         roll = 0;
//         name = "Unknown";

//         cout << name << "\n" << roll << "\nStudent created\n";
//     }
// };

// int main()
// {
//     Student s;

//     return 0;
// }
                                           // argument constructor

// #include <iostream>
// #include <string>
// using namespace std;

// class Student
// {
// public:
//     string name;
//     double marks;

//     Student(string name = "Unknown", double marks = 0.0)
//         : name(name), marks(marks)
//     {
//     }

//     void display() const
//     {
//         cout << name << ": " << marks << '\n';
//     }
// };

// int main()
// {
//     Student s1;
//     Student s2("Faizul");
//     Student s3("Aman", 92.5);

//     s1.display();
//     s2.display();
//     s3.display();
// }




// #include <iostream>                       very important
// using namespace std;

// class Demo
// {
// public:
//     Demo()
//     {
//         cout << "Created\n";
//     }

//     ~Demo()
//     {
//         cout << "Destroyed\n";
//     }
// };

// int main()
// {cout << "Main continues\n";
//     Demo a;

//     {
//         Demo b;
//     }

//     cout << "Main continues\n";
// }


// #include <iostream>
// using namespace std;

// class BankAccount{
//     string owner;
//     int amount;
//     public:
//     BankAccount(string name, int price):
//         owner(name), amount(price){
// cout << "constructor ask value";
//     }
// void display() const 
//     {
//         cout << "Owner: " << owner << '\n';
//         cout << "Balance: " << owner << '\n';
//     } 
// };

// int main()
// {
//     BankAccount a("Faizul", 5000);
//     BankAccount b("Aman", 12000);

//     a.display();
//     b.display();
// }


// // ?????????????????????? is same 
// #include <iostream>
// #include <string>
// using namespace std;

// class BankAccount
// {
// private:
//     string owner;
//     double balance;

// public:
//     // Using `this->` resolves naming collisions between parameters and members
//     BankAccount(string owner, double balance)
//     {
//         this->owner = owner;
//         this->balance = balance;
//     }

//     // Inside a const member function, `this` is a pointer to a const object:
//     // const BankAccount* const this;
//     void display() const
//     {
//         cout << "Owner: " << this->owner << '\n';
//         cout << "Balance: " << this->balance << '\n';
//     }
// };

// int main()
// {
//     BankAccount a("Faizul", 5000);
//     BankAccount b("Aman", 12000);

//     a.display();
//     b.display();

//     return 0;
// }
//#include <iostream>
// using namespace std;
// class numb{
//     int a;
//     public:
//     numb(int num){    // add default value int num = 7; or add default constructor numb(){}
//         a = num;
//     }
//     void dis(){
//         cout << a ;
//     }
// };
// int main() {
//     numb x(10);
//     x.dis();
//     return 0;
// }


//?????????????????????copy constructor

// #include <iostream>
// #include <string>
// using namespace std;

// class Student
// {
// public:
//     int roll;
//     string name;

//     Student(int r, string n)
//         : roll(r), name(n)
//     {
//     }

//     Student(const Student& other)
//         : roll(other.roll), name(other.name)        // =  this->roll = other.roll; this->name = other.name;
//     {
//         cout << "Copy constructor called\n";
//     }

//     void display() const
//     {
//         cout << roll << " " << name << '\n';
//     }
// };

// int main()
// {
//     Student s1(101, "Faizul");

//     Student s2 = s1;
//     Student s(s2);
//     s.display();
//     s1.display();
//     s2.display();
// }


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    double marks;

public:
    // Default constructor
    Student()
        : roll(0), name("Unknown"), marks(0.0)
    {
        cout << "Default constructor\n";
    }

    // Parameterized constructor
    Student(int r, string n, double m)
        : roll(r), name(n), marks(m)
    {
        cout << "Parameterized constructor\n";
    }

    // Copy constructor
    Student(const Student& other)
        : roll(other.roll),
          name(other.name),
          marks(other.marks)
    {
        cout << "Copy constructor\n";
    }

    // Save object data as text
    bool save() const
    {
        ofstream file("studnt.txt");

        if (!file)
            return false;

        file << roll << '\n'
             << name << '\n'
             << marks << '\n';

        file.close();
        return static_cast<bool>(file);
    }

    // Display the object
    void display() const
    {
        cout << "Roll: " << roll << '\n';
        cout << "Name: " << name << '\n';
        cout << "Marks: " << marks << '\n';
    }

    // Destructor
    ~Student()
    {
        cout << "Student object destroyed\n";
    }
};

int main()
{
    Student s1(101, "Faizul", 91.5);

    s1.save();

    Student s2 = s1;

    s2.display();

    return 0;
}


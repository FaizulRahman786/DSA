#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Student
{
public:
    int roll;
    string name;
    double marks;

    void save()
    {
        ofstream file("student.txt");

        if (!file)
        {
            cerr << "Cannot open file\n";
            return;
        }

        file << roll << '\n';
        file << name << '\n';
        file << marks << '\n';

        if (!file)
            cerr << "Failed to save student\n";
    }

    bool load()
    {
        ifstream file("student.txt");

        if (!file)
            return false;

        if (!(file >> roll))
            return false;

        file.ignore(10000, '\n');

        if (!getline(file, name))
            return false;

        if (!(file >> marks))
            return false;

        return true;
    }

    void display() const
    {
        cout << "Roll: " << roll << '\n';
        cout << "Name: " << name << '\n';
        cout << "Marks: " << marks << '\n';
    }
};


int main()
{

//  fstream file("nonexistent_file.txt", ios::in);

//     // Check if the file is opened
//     if (!file.is_open()) {
//         cerr << "Error: Unable to open file!" << endl;
//         return 1;
//     }

//     file.close();


// fstream file("data.txt", ios::in | ios::out);

// if (!file.is_open()) {
//     ofstream createFile("data.txt");
//     createFile.close();

//     file.open("data.txt", ios::in | ios::out);
// }


// ofstream createFile("rahman.txt");
// createFile.close();





    // fstream file("tree.cpp",ios::in |ios::out | ios::app); ;  //create file if not exist

    // if (!file.is_open())
    // {
    //     cerr << "Error: Unable to open file!" << endl;
    //     return 1;
    // }
    // string line;
    // while (getline(file, line))
    //     cout << line << endl;

    // // Check for eof
    // if (file.eof())
    //     cout << "Reached end of file." << endl;
    // else
    //     cerr << "Error: File reading failed!" << endl;

    // file.close();
 



//  fstream file("text.txt",ios :: in | ios :: out);

//     if (!file.is_open())
//     {
//         cerr << "Error: Unable to open file!" << endl;
//         return 1;
//     }
//     string line;
//     file << "hi my name is faizul rahman siddique";
//     file.seekg(0);
// if(!getline(file, line)){
//     cout << "Error: Failed to read line!" << endl;}

// if(!getline(file, line)){
//     cout << "Error: Failed to read line!" << endl;}
//     while (getline(file, line))
//         cout << line << endl;
// if(!getline(file, line)){
//     cout << "Error: Failed to read line!" << endl;}
//     // Check for eof
//     if (file.eof())
//         cout << "Reached end of file." << endl;
//     else
//         cerr << "Error: File reading failed!" << endl;
//         file.flush();

//     file.close();


    

    // ofstream out;
    // out.open("text.txt");
    // string st;
    // st = "hi my name is faizul rahman siddique";
    // out << st;
    // out.close();
    // ifstream in;
    // string s;
    // in.open("text.txt");
    // in >> s;
    // cout << s;
    // getline(in, s);
    // cout << s;

    //  fstream file("text.txt", ios::in | ios::out | ios::trunc);
    // file << "hi my name is faizul rahman siddique.";
    // file.close();

    // ifstream in("text.txt");
    // string st;
    // in >> st;
    // cout << st << endl;
    // in.seekg(0);
    // file.clear(); // clear error and put to 0 same as seekg
    // getline(in,st);
    // // cout << st;
    // file.flush();
    // // st.clear(); clear sentence
    // cout << st;
    // in.close();
    // file.open("text.txt",ios::trunc| ios::out);
    // file.close();

    // fstream file("text.txt", ios::in | ios::out | ios::trunc);
    // file << "hi my name is faizul rahman siddique.";
    // file.seekg(0);
    // string st;
    // file >> st;
    // cout << st;
    // file.seekg(0);
    // getline(file, st);
    // cout << st;
    // file.flush();
    // file.close();






    // Adding ios::app creates the file if it does not exist
    // fstream file("GFG.txt", ios::in | ios::out | ios::app);

    // if (!file.is_open())
    // {
    //     cerr << "Error: Unable to open or create file!" << endl;
    //     return 1;
    // }

    // // Move read pointer to the start so getline() reads from byte 0
    // file.seekg(0, ios::beg);

    // string line;
    // while (getline(file, line))
    //     cout << line << endl;

    // if (file.eof())
    //     cout << "Reached end of file." << endl;
    // else
    //     cerr << "Error: File reading failed!" << endl;

    // file.close();
  













                                             //   binary file

    // int numbers[] = {10, 20, 30, 40};

    // ofstream out("numbers.dat", ios::binary);

    // if (!out)
    // {
    //     cerr << "Cannot create file\n";
    //     return 1;
    // }

    // out.write(
    //     reinterpret_cast<const char*>(numbers),
    //     sizeof(numbers)
    // );
    // out.close();

    // ifstream in("numbers.dat", ios::binary);

    // if (!in)
    // {
    //     cerr << "Cannot read file\n";
    //     return 1;
    // }

    // // Third integer: index 2, zero-based.
    // in.seekg(2 * sizeof(int), ios::beg);

    // int value;

    // if (in.read(reinterpret_cast<char*>(&value),
    //             sizeof(value)))
    // {
    //     cout << "Third value: " << value << '\n';
    // }
    // else
    // {
    //     cerr << "Could not read value\n";
    // }

    // in.close();

                                              // squence access file

    // int marks[] = {70, 85, 92, 65};

    // ofstream out("marks.dat", ios::binary);
    // out.write(
    //     reinterpret_cast<const char*>(marks),
    //     sizeof(marks)
    // );
    // out.close();

    // ifstream in("marks.dat", ios::binary);

    // int mark;

    // while (in.read(
    //     reinterpret_cast<char*>(&mark),
    //     sizeof(mark)))
    // {
    //     cout << mark << '\n';
    // }

    // in.close();

                       // random access file


    // ifstream in("numbers.dat", ios::binary);

    // if (!in)
    // {
    //     cerr << "Cannot open file\n";
    //     return 1;
    // }

    // // Jump to the third integer.
    // in.seekg(2 * sizeof(int), ios::beg);

    // int mark;

    // if (in.read(
    //     reinterpret_cast<char*>(&mark),
    //     sizeof(mark)))
    // {
    //     cout << "Third mark: " << mark << '\n';
    // }
    // else
    // {
    //     cerr << "Reading failed\n";
    // }

    // in.close();



                           // class file



 




    Student s;

    s.roll = 101;
    s.name = "Faizul Rahman";
    s.marks = 91.5;

    s.save();

  

    if (s.load())
        s.display();
    else
        cout << "Unable to load student\n";

        


    return 0;

}
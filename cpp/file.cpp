#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{

//  fstream file("nonexistent_file.txt", ios::in);

//     // Check if the file is opened
//     if (!file.is_open()) {
//         cerr << "Error: Unable to open file!" << endl;
//         return 1;
//     }

//     file.close();


fstream file("data.txt", ios::in | ios::out);

if (!file.is_open()) {
    ofstream createFile("data.txt");
    createFile.close();

    file.open("data.txt", ios::in | ios::out);
}






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


    return 0;

}
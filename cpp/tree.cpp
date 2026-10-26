#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // Adding ios::app creates the file if it does not exist
    fstream file("GFG.txt", ios::in | ios::out | ios::app);

    if (!file.is_open())
    {
        cerr << "Error: Unable to open or create file!" << endl;
        return 1;
    }

    // Move read pointer to the start so getline() reads from byte 0
    file.seekg(0, ios::beg);

    string line;
    while (getline(file, line))
        cout << line << endl;

    if (file.eof())
        cout << "Reached end of file." << endl;
    else
        cerr << "Error: File reading failed!" << endl;

    file.close();
    return 0;
}
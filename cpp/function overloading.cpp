#include <iostream>
using namespace std;

int main()
{
    int x = 4;
    int y = 5;
    cout << x << "+" << y << "=" << x + y << endl;
    swap(x, y);
    // cout << swap(x,y); // can't cout void function
    cout << x << "+" << y << "=" << x + y << endl;
    return 0;
};



















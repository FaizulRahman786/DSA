// #include <iostream>
// using namespace std;
                                //call by value
// void swap(int a , int b){
//     int temp = a;
//     b=a;
//     a = b;
// }

// int main() {
//     int x = 4; int y = 5;
//     cout << x << "+" << y << "=" << x+y << endl;
//     swap(x,y);
// // cout << x << "+" << y << "=" << cout << swap(x,y); can't cout void function
// cout << x << "+" << y << "=" << x+y << endl;
//     return 0;
// }



                            //call by reference 
// #include <iostream>
// using namespace std;

// void swap(int &a , int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main() {
//     int x = 4; int y = 5;
//     cout << x << "+" << y << "=" << x+y << endl;
//     swap(x,y);
// // cout << x << "+" << y << "=" << cout << swap(x,y); can't cout void function
// cout << x << "+" << y << "=" << x+y << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void swap(int &a , int &b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int x = 4; int y = 5;
//     cout << x << "+" << y << "=" << x+y << endl;
//     swap(x,y);
// // cout << x << "+" << y << "=" << cout << swap(x,y); can't cout void function
// cout << x << "+" << y << "=" << x+y << endl;
//     return 0;
// }


                                            //call by pointer
// #include <iostream>
// using namespace std;

// void swap(int *a , int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int x = 4; int y = 5;
//     cout << x << "+" << y << "=" << x+y << endl;
//     swap(&x,&y);
// // cout << x << "+" << y << "=" << cout << swap(x,y); can't cout void function
// cout << x << "+" << y << "=" << x+y << endl;
//     return 0;
// }




#include <iostream>
using namespace std;

int& swap(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main() {
    int x = 4; int y = 5;
    cout << x << "+" << y << "=" << x+y << endl;
    swap(x,y)=786;
// cout << x << "+" << y << "=" << cout << swap(x,y); can't cout void function
cout << x << "+" << y << "=" << x+y << endl;
    return 0;
}

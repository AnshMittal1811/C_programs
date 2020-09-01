#include <iostream>
using namespace std;

typedef int feet; 
enum color { red, green = 5, blue } c;

int main() {
   c = blue;
   feet distance = 67;
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(double) << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
   cout << "value of color c : " << c <<endl; 
   cout << "value of feet distance: " << distance <<endl; 
   return 0;
}


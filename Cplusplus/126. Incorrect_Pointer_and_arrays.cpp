#include <iostream>
 
using namespace std;
const int MAX = 3;
 
int main () {
   int  var[MAX] = {10, 100, 200};
 
   for (int i = 0; i < MAX; i++) {
      *var = i;    // This is a correct syntax
      *(var+2) = 500 ;       // This is incorrect.
  }
    cout << "*var: "<<*var<<endl;
	cout << "*(var + 1): "<<*(var+1)<<endl;
	cout << "*(var + 2): "<<*(var+2)<<endl;
	return 0;
}

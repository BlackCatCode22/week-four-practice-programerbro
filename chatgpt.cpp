#include <iostream>
#include <string>

using namespace std;

int main()
{
  cout << " welcome to week four pratice" << endl;
  //crate a one domensional array
  char MyChar[10] = {'a','b','c','d','e','f','g','h','i','j'};
  cout << "\n\n should be an e..." << MyChar[4] << endl;
  cout << "my char is  " << MyChar << endl;
  for ( int i =0; i < 10; i++) {
    cout << "MyChar[" << i << "] is " << MyChar[i] << "\n" << endl;
  }

  int num1 = 33 ;
  int num2 = 111 ;

  if (num1 > num2) {
    cout << " \n\ the test condition was true";
  }
  else {
    cout << "\n the test condition evaluated to false ";
  }
    return 0;
}

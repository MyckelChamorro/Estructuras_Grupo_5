// template specialization
#include <iostream>
#include"Template.cpp"
#include"Template.h"
using namespace std;

int main () {
  mycontainer<int> myint (7);
  mycontainer<char> mychar ('j');
  cout << myint.increase() << endl;
  cout << mychar.uppercase() << endl;
  return 0;
}

#include<iostream>
using namespace std;

namespace ns{
  int x=16; 
  //cout << &x << endl;
}
int main() {
  int x = 9;
  //cout << &x << endl;
  using namespace ns;
  x = 20;    
  cout<<x ;//<< " " << &x;
  return 0;
}

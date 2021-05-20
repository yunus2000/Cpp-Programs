#include<iostream>
using namespace std;
class Number {
   virtual void check() {
      //empty function
   }
};
class Integer: public Number {};
int main() {
   Number *base_ptr = new Integer;
   Integer *derived_ptr = dynamic_cast<Integer*>(base_ptr);
   if(derived_ptr != NULL)
      cout<<"It is working";
   else
      cout<<"cannot cast Base* to Derived*";
   return 0;
}

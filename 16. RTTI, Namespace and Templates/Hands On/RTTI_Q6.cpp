#include<iostream>
#include<typeinfo>
using namespace std;

class Base{
};

class Der: public Base{
	
};

int main(){
	Base *bptr;
   Der *dptr;

   if (typeid(bptr) == typeid(Der)) 
     cout <<"identical" <<  endl;
   else
     cout << "Different" << endl;
	
	return 0;
}
  


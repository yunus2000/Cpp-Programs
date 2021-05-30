//#define NDEBUG

#include<iostream>
#include<assert.h>
#include<typeinfo>
using namespace std;

class Base{};

class Der1 : public Base { };

int main(){
	
	Der1  dobj;
	Base & bref = dobj;
	Base  bobj;
	Base  *bptr = &dobj;
	assert ( typeid(bref) == typeid(dobj) );
	assert ( typeid(bobj) == typeid(dobj) );
	assert ( typeid(*bptr) == typeid(dobj) );
	
	return 0;
}

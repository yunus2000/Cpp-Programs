#include<iostream>
#include "Electronics.h"
using namespace std;

class Mobile{
	Electronics e;
	public:
		void enter(){
			e.input();
		}
		
		void print(){
			e.display();
		}
};



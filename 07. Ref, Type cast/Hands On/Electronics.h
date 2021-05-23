#ifndef __ELECTRONICS__
#define __ELECTRONICS__

#include<iostream>
#include<string>
using namespace std;

class Electronics{
	string name,colour;
	public:
		void input(){
			name = "Mobile";
			colour = "Flame Red";
		}
		
		void display(){
			cout << "Electronic name is " << name << " and its colour is " << colour << endl;
		}
};

#endif

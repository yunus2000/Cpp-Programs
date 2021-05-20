#include<iostream>
using namespace std;

class person{
	public:
		string name;
		
		person(string s){
			name = s;
			cout << "Person Constructor: " << name<< endl;
		}
		
		string getname(){
			return(name);
		}
};

class participant: public person{
	public:
		participant(string s):person(s){
			//person(s);
			cout << "Participant constructor: " << s<< endl;
		}
};

int main(){
	participant p("Hello");
	return(0);
}

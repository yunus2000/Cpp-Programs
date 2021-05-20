#include<iostream>
using namespace std;

class person{
	public:
		string name;
		
		person(string s){
			name = s;
			//cout << "Person Constructor: " << name<< endl;
		}
		
		string getname(){
			return(name);
		}
};

class participant: public person{
	public:
		participant(string s):person(s){
			//person(s);
			//cout << "Participant constructor: " << s<< endl;
		}
		
		void operator =(participant &p){
			this->name = p.name;
		}
		
		void print(){
			cout << "Name: " << name;
		}
};

int main(){
	participant p1("Hello"),p2("World");
	p1 = p2;
	cout << p1.getname()<< endl;
	//p1.print();
	return(0);
}

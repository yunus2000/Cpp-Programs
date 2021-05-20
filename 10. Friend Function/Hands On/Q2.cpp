#include<iostream>
#include<cstring>
using namespace std;

class Str{
	string s;
	public:
		Str(){
			s = "";
		}
		
		Str(string st){
			s = st;
		}
		
		friend Str operator+(Str &a,string st){
			Str stri;
			stri.s = a.s + st;
			return(stri);
		}
		
		void display(){
			cout << s;
		}
};

int main(){
	Str s1("Hello"),s2;
	string sample;
	cout << "Enter String needed to be added: ";
	cin >> sample;
	s2 = s1 + sample;
	cout << "Initial String is: ";
	s1.display();
	cout << "\nFinal String is: ";
	s2.display();
	
	return(0);
}

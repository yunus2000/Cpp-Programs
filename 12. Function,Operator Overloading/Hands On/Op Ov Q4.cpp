#include<iostream>
#include<string>
using namespace std;

class String{
	private:
		string s;
	public:
		String(string str){
			s = str;
		}
		
		char operator[](int n){
			return(s.at(n));
		}
		
		void display(){
			cout << s << endl;
		}
};

int main(){
	String s("Hello");
	s.display();
	cout << s[0] << endl;
	cout << s[1] << endl;
}

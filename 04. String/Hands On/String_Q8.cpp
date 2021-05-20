#include<iostream>
using namespace std;

void reverse(string s){
	string s1 = "";
	for(int i=s.length() - 1; i>=0;i--){
		s1 += s[i];
	}
	cout << "Reversed String is : "<<s1;
}

int main(){
	string s;
	getline(cin,s);
	cout << "Given String is: " << s << endl;
	reverse(s);
}

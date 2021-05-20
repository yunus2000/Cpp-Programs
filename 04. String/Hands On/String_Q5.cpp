#include<iostream>
#include<string>
using namespace std;

void vowelstoZ(string s){
	string v = "aeiouAEIOU";
	for(int i=0;i<s.length();i++){
		if(v.find(s[i]) != string::npos){
			s.replace(s.find(s[i]),1,"Z");
		}
	}
	cout << s;
}

int main(){
	string s;
	getline(cin,s);
	vowelstoZ(s);
}

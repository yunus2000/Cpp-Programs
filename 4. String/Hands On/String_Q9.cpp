#include<iostream>
#include<string>
#include<sstream>
using namespace std;

void strconc(string s1,int n,string s2){
	stringstream ss;
	ss << n;
	string str;
	ss >> str; 
	cout << s1 + str + s2;
}

int main(){
	string s1;
	int n;
	string s2;
	cin >> s1;
	cin >> n;
	cin >> s2;
	strconc(s1,n,s2);
}

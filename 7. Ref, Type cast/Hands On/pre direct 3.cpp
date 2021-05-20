#include<iostream>
using namespace std;

#define up(s) for(int i=0;i<s.length();i++){s[i] = toupper(s[i]);}

int main(){
	string s;
	cin >> s;
	cout << up(s);
	retrun(0);
}

#include<iostream>
#include<string>
using namespace std;

int main(){
	string s1,s2;
	cin >> s1;
	cin >> s2;
	string s3 = "",s4 = "";
	for(int i=0;i < s1.length();i++){
		s3 += toupper(s1[i]);
	}
	for(int i=0; i< s2.length();i++){
		s4 += toupper(s2[i]);
	}
	if(s3 == s4){
		cout << "Entered strings are identical";
	}
	else{
		cout << "Entered strings are not identical";
	}
}

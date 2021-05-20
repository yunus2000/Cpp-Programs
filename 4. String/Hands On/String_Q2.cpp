#include<iostream>
using namespace std;

int checkidentical(string s1, string s2){
	for(int i=0;i<s1.length();i++){
		s1[i] = toupper(s1[i]);
	}
	for(int i=0;i<s2.length();i++){
		s2[i] = toupper(s2[i]);
	}
	if(s1 == s2){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	cout << checkidentical(s1,s2);
}

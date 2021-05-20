#include<iostream>
using namespace std;

void mystrcat(string s1, string s2){
	 string s3 = "";
	 for(int i=0;i<s1.length();i++){
	 	s3 += s1[i];
	 }
	 for(int i=0;i<s2.length();i++){
	 	s3 += s2[i];
	 }
	 cout << s3;
}

int main(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	mystrcat(s1,s2);
}

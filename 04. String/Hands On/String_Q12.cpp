#include<iostream>
using namespace std;

int main(){
	char s1[15];
	string s;
	cout << "Enter String: ";
	getline(cin,s);
	if(s.length() > 15){
		cout << "Invalid Number of Parameters, Please Try Again with Less Than 15 Characters!!";
	}
	else{
		for(int i=0;i < s.length(); i++){
			s1[i] = s[i];
		}
		cout << s1;
	}
	
	return 0;
}

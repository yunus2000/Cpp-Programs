#include<iostream>
using namespace std;

int len(string s){
	int i = 0;
	while(s[i]){
		i++;
	}
	return(i);
}

int main(){
	string s;
	getline(cin,s);
	cout << len(s);
}

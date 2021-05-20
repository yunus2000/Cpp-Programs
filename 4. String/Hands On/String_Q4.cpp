#include<iostream>
using namespace std;

int mystrlen(char *s){
	int i=0;
	while(s[i]){
		i++;
	}
	return i;
}

int main(){
	char s[100];
	cin.getline(s,100);
	cout << mystrlen(s);
}

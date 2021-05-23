#include<iostream>
using namespace std;

void compare(char *s1,char *s2){
	int trig = 0;
	while(*s1 && *s2){
		if(*s1 != *s2){
			trig = 1;
			break;
		}
		*s1++;
		*s2++;
	}
	if(trig == 0){
		cout << "Given Strings are Equal";
	}
	else{
		cout << "Given Strings are Not Equal";
	}
}

int main(){
	char s1[30],s2[30];
	cin >> s1;
	cin >> s2;
	compare(s1,s2);
	/*if(s1 == s2){
		cout << "Given strings are Equal";
	}
	else{
		cout << "Given strings are Not Equal";
	}*/
}

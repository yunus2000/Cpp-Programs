#include<iostream>
#include<string>
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
		cout << "Given Strings are Identical";
	}
	else{
		cout << "Given Strings are Not Identical";
	}
}

int main(){
	char s1[30],s2[30];
	cout << "Enter String 1: ";
	cin.getline(s1,30);
	cout << "Enter String 2: ";
	cin.getline(s2,30);
	int n1 = 0,n2 = 0;
	while(1){
		if(s1[n1] == '\0'){
			break;
		}
		else{
			s1[n1] = toupper(s1[n1]);
			n1++;
		}
	}
	while(1){
		if(s2[n2] == '\0'){
			break;
		}
		else{
			s2[n2] = toupper(s2[n2]);
			n2++;
		}
	}
	compare(s1,s2);
	
	return 0;
}

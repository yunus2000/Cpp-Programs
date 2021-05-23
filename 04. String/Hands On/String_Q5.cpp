#include<iostream>
#include<string>
using namespace std;

void vowelstoZ(char *s,int n){
	for(int i=0;i<n;i++){
		if(*s == 'a' || *s == 'A' ||*s == 'e' ||*s == 'E' ||*s == 'i' ||*s == 'I' ||*s == 'o' ||*s == 'O' ||*s == 'u' ||*s == 'U'){
			*s = 'Z';
		}
		*s++;
	}
}

int main(){
	char s[30];
	cout << "Enter String: ";
	cin.getline(s,30);
	int k = 0,n = 0;
	while(s[k] != '\0'){
		k++;
		n++;
	}
	//cout << n;
	vowelstoZ(s,n);
	cout << "Changed String: ";
	for(int i=0;i<n;i++){
		cout << s[i];
	}
}

#include<iostream>
using namespace std;

void reverse(char *s1,char *s2,int n){
	for(int i=0;i<n;i++){
		*(s2+i) = *(s1+n-i-1);
	}
}

int main(){
	char s1[30],s2[30];
	cout << "Enter the String: ";
	cin.getline(s1,30);
	int n1 = 0;
	while(s1[n1] != '\0'){
		n1++;
	}
	reverse(s1,s2,n1);
	cout << "Reversed String is: " << s2;
}

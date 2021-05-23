#include<iostream>
using namespace std;

void mystrconcat(char *s1,char *s2,char *s3,int n1,int n2){
	for(int i=0;i<n1+n2;i++){
		if(i < n1){
			*s3 = *s1;
			*s3++;
			*s1++;
		}
		else{
			*s3 = *s2;
			*s3++;
			*s2++;
		}
	}
}

int main(){
	char s1[30],s2[30],s3[30];
	cout << "Enter String 1: ";
	cin.getline(s1,30);
	cout << "Enter String 2: ";
	cin.getline(s2,30);
	int n1 = 0,n2 = 0;
	while(s1[n1] != '\0'){
		n1++;
	}
	while(s2[n2] != '\0'){
		n2++;
	}
	mystrconcat(s1,s2,s3,n1,n2);
	cout << s3;
}

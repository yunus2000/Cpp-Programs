#include<iostream>
#include<sstream>
using namespace std;

void strconc(char *s1,int n,char *s2,char *s3){
	stringstream ss;
	ss << n;
	string str;
	ss >> str;
	
	char c = str[0];
	
	int n1 = 0;int n2 = 0;
	char *l = s1;
	while(*(l++)){
		n1++;
	}
	
	char *m = s2;
	while(*(m++)){
		n2++;
	}
	
	for(int i=0;i < n1+n2+1;i++){
		if(i < n1){
			*s3 = *s1;
			*s3++;
			*s1++;
		}
		if(i == n1){
			*s3 = c;
			*s3++;
		}
		if(i > n1){
			*s3 = *s2;
			*s3++;
			*s2++;
		}
	}
}

int main(){
	char s1[30],s2[30],s3[60];
	int n;
	cout << "Enter String 1: ";
	cin.getline(s1,30);
	cout << "Enter String 2: ";
	cin.getline(s2,30);
	cout << "Enter an Integer: ";
	cin >> n;
	
	
	strconc(s1,n,s2,s3);
	cout << "After Concatination: " << s3;
}

#include<iostream>
#include<cstddef>
using namespace std;

char mystr(const char *s1,const char *s2){
	int n = 0;
	while(*s1 != '\0'){
		int trig = 0;
		if(*s2 == *s1){
			const char *p1;
			p1 = s1;
			const char *p2 = s2;
			while(*p2 != '\0'){
				if(*p2 != *p1){
					trig = 1;
				}
				*p2++;
				*p1++;
			}
			if(trig == 0){
				return *s1;
			}
		}
		n++;
		*s1++;
	}
	if(*s1 == '\0'){
		return '0';
	}
}

int main(){
	char s1[50],s2[30];
	cout << "Enter two stings: " << endl;
	cin.getline(s1,50);
	cin.getline(s2,30);
	char n = mystr(s1,s2);
	cout << n;
	
	return 0;
}





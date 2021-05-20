#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;

int main(){
	const char *str[] = {"Welcome","To","Wipro","Technologies","Banglore"};
	cout << sizeof(str) << " " << strlen(str[0]) << endl;
	cout << str[1] << endl;
	cout << str[2][2] << endl;	
	return 0;
}

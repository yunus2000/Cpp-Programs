#include<iostream>
using namespace std;

int main(){
	char str[] = "Wipro";
	char *s = str;
	cout << s[0];
	cout << s[1];
	cout << *(s+3);
	return 0;
}

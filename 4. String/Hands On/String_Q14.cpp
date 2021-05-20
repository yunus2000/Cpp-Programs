#include<iostream>
using namespace std;

int main(){
	char *ptr = (char *)"uvwxyzabc";
	cout << 2[ptr];
	cout << ptr[2];
	cout << *(ptr + 2);
	return 0;
}

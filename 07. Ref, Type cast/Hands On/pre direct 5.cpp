#include<iostream>
using namespace std;
#define DEBUG

int main(){
	#ifdef DEBUG
	cout << __LINE__;
	#endif

	return(0);
}

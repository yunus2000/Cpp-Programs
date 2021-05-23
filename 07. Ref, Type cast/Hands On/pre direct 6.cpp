#include<iostream>
#define DEBUG
using namespace std;

int main(){
	int x = 9;
	if(x < 10){
		cout << "Less Than 10: " << endl;
	}
	else{
		cout << "Greater Than 10:" << endl;
	}
	
	#ifdef DEBUG
	cout << __TIME__ << endl;
	cout << __LINE__ << endl;
	#endif
	
	#if 0
	cout << "Hello Wipro" << endl;
	cout << "This Block is not Executed" << endl;
	#endif
	
	return 0;
}

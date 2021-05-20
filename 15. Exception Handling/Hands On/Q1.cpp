#include<iostream>
using namespace std;

double divide(int x,int y){
	if(y ==0){
		throw "Divide By Zero Error!!";
	}
	return(x/y);
}

int main(){
	int d,n1,n2;
	cin >> n1;
	cin >> n2;
	try{
		  d = divide(n1,n2);
	  	  cout << d << endl;
	}
	
	
	catch(const char* msg){
		cerr << msg << endl;
	}
	
	return 0;
}

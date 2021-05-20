#include<iostream>
#define size 10
using namespace std;

int main(){
	int a[size];
	for(int i=-1;i<size; i++){
		try{
			if(i<0){
				throw "Index Less than 0";
			}
			if(i>size-1){
				throw "Index out of Range";
			}
			cout << a[i] << " ";
		}
		
		catch(const char* msg){
		cout << msg << endl;
	}
	}
	
	return 0;
}

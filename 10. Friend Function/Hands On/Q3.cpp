#include<iostream>
using namespace std;

class xyz{
	int a;
	public:
		xyz(int k){
			a = k;
		}
		
		friend int access(xyz &obj,int k){
			obj.a = k;
			return(obj.a);
		}
};

int main(){
	xyz o(20);
	cout << access(o,12);
	
	return(0);
}

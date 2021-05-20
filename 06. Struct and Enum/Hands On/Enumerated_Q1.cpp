#include<iostream>
using namespace std;

enum WEEK{sunday,monday,tuesday,wednesday,thursday,friday,saturday};

int main(){
	int weight[10];
	for(int i=sunday;i<=saturday;i++){
		cout << "Enter Weight on " << i << ": ";
		cin >> weight[i];
	}
	for(int i=tuesday;i<=thursday;i++){
		cout << "Weight on " << i << " is: " << weight[i]<< endl;
	}
	return(0);
}

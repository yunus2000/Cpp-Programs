#include<iostream>
using namespace std;

template<typename T>
void sort(T a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i] > a[j]){
				T c = a[i];
				a[i] = a[j];
				a[j] = c;
			}	
		}
	}
}

int main(){
	int a[5] = {1,5,6,2,7};
	cout << "Initial Array is: ";
	for(int i=0;i<5;i++){
		cout << a[i] << " ";
	}
	cout << endl;
	sort(a,5);
	cout << "Sorted Array is: ";
	for(int i=0;i<5;i++){
		cout << a[i] << " ";
	}
	cout << endl;
	
	char a1[5] = {'a','d','f','b','c'};
	cout << "\nInitial Array is: ";
	for(int i=0;i<5;i++){
		cout << a1[i] << " ";
	}
	cout << endl;
	sort(a1,5);
	cout << "Sorted Array is: ";
	for(int i=0;i<5;i++){
		cout << a1[i] << " ";
	}
	cout << endl;
	
	double a2[5] = {1.3,5.2,6.12,2.222,7.32};
	cout << "\nInitial Array is: ";
	for(int i=0;i<5;i++){
		cout << a2[i] << " ";
	}
	cout << endl;
	sort(a2,5);
	cout << "Sorted Array is: ";
	for(int i=0;i<5;i++){
		cout << a2[i] << " ";
	}
	cout << endl;
	return 0;
}

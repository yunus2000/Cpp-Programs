#include<iostream>
using namespace std;

int main(){
	int a[10], b[10];
	int *ar = a;
	int *br = b;
	int n = 0;
	int *nptr = &n;
	
	for(int i=0;i<10;i++){
		cin >> *ar;
		*ar++;
		*nptr = *nptr + 1;
	} 
	cout << endl;
	
	for(int i=0;i<9;i++){
		for(int j=i+1;j<10;j++){
			if(a[i] > a[j]){
				swap(a[i],a[j]);
			}
		}
		*br = a[i];
		*br++;
	}
	*br = a[9];
	/*for(int i=0;i<10;i++){
		*br = a[i]
		*br++;
	}*/
	
	cout << "Size of array is: " << *nptr << endl;
	cout << "Sorted Array is: ";
	for(int i=0;i<10;i++){
		cout << b[i] << " ";
	}
}

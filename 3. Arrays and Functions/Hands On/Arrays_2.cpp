#include<iostream>
 using namespace std;
 
 int main(){
 	int n;
 	cin >> n;
 	int a[n];
 	for(int i=0;i<n;i++){
 		cin >> a[i];
	 }
	 int sum = 0, avg = 0;
	 for(int i= 0;i<n;i++){
	 	sum += a[i];
	 }
	 cout << "Sum of all elemnts in the array is " << sum << endl;
	 cout << "Average of all the input numbers is " << sum/n << endl;
 }

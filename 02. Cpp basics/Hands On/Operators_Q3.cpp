#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin >> a;
	
	//Set bit
	b = a;
	int count = 0;
	while(b != 0){
		count += b&1;
		b >>= 1;
	}
	cout << count;
	
	//Show bit
	
	//Clear bit
}

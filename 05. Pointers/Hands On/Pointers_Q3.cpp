#include<iostream>
using namespace std;

void swap(int *ap, int *bp){
	int c = *ap;
	*ap = *bp;
	*bp = c;
}

int main(){
	int a,b;
	cin >> a;
	cin >> b;
	cout << "Before Swapping: " << a << " " << b << endl;
	swap(&a,&b);
	cout << "After Swapping: " << a << " " << b;
}

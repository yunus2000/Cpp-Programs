#include<iostream>
using namespace std;

void idheavy(int a[][3]){
	int corner = a[0][0] + a[2][2] + a[0][2] + a[2][0];
	int center = a[0][1] + a[1][0] + a[2][1] + a[1][2];
	if(corner > center){
		cout << 1;
	}
	if(corner < center){
		cout << 2;
	}
	if(corner == center){
		cout << 3;
	}
}

int main(){
	int a[3][3];
	cout << "Enter 9 Values:" << endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin >> a[i][j];
		}
	}
	idheavy(a);

	return 0;
}

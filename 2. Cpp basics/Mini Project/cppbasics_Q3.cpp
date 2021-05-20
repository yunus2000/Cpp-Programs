#include<iostream>
using namespace std;

void pattern1(int n){
    for(int i=0;i < n;i++){
		for(int j=0;j<n-i-1;j++){
			cout << " ";
		}
		for(int k=0;k<i+1;k++){
			cout << i+1;
		}
		for(int m=0;m<i;m++){
			cout << i+1;
		}
		for(int l=0;l<n-i;l++){
			cout << " ";
		}
		cout << endl;
	}
}

void pattern2(int n){
    for(int i=0;i < n;i++){
		for(int j=0;j<n-i-1;j++){
			cout << " ";
		}
		for(int k=1;k<i+2;k++){
			cout << n-i;
		}
		for(int m=0;m<i;m++){
			cout << n-i;
		}
		for(int l=0;l<n-i;l++){
			cout << " ";
		}
		cout << endl;
	}
}

void pattern3(int n){
    for(int i=0;i < n;i++){
		for(int j=0;j<n-i-1;j++){
			cout << " ";
		}
		for(int k=0;k<i+1;k++){
			cout << k+1;
		}
		for(int m=i;m>0;m--){
			cout << m;
		}
		for(int l=0;l<n-i;l++){
			cout << " ";
		}
		cout << endl;
	}
}

void pattern4(int n = 5){
    int a = 64;
	for(int i=0;i < n;i++){
		for(int j=0;j<n-i-1;j++){
			cout << " ";
		}
		for(int k=0;k<i+1;k++){
			cout << k+1;
		}
		for(int m=i;m>0;m--){
			cout << char(a);
			a--;
		}
		for(int l=0;l<n-i;l++){
			cout << " ";
		}
		cout << endl;
		a = a+i+1;
	}
}

void pattern5(int n = 5){
	int a = 64;
	for(int i=0;i < n;i++){
		int trig = 1;
		int b = 65;
		for(int j=0;j<n-i-1;j++){
			cout << " ";
		}
		for(int k=0;k<i+1;k++){
			if(trig == 1){
				cout << char(b);
				trig = 0;
			}
			else{
				 cout << k+1;
				 trig = 1;	
			}
			b++;
		}
		
		for(int m=i;m>0;m--){
			if(trig == 1){
				cout << char(a);
				trig = 0;
			}
			else{
				cout << m;
				trig = 1;
			}
			a--;
		}
		for(int l=0;l<n-i;l++){
			cout << " ";
		}
		cout << endl;
		a = a+i+1;
	}
}

void pattern6(int n = 5){
    int a = 1;
	int g = 1;
	for(int i=0;i < n;i++){
		for(int j=0;j<n-i-1;j++){
			cout << " ";
		}
		for(int k=0;k<g;k++){
			cout << a;
			if(a<9){
				a++;
			}
			else{
				a = 0;
			}
		}
		g = g + 2;
		cout << endl;
	}
}

void pattern7(int n = 5){
    int a = 0;
	int g = 1;
	for(int i=0;i < n;i++){
		for(int j=0;j<n-i-1;j++){
			cout << " ";
		}
		for(int k=0;k<g;k++){
			if(k < i+1){
				if(a < 9){
					a++;
				}
				else{
					a = 0;
				}
				cout << a;
			}
			else{
				if(a > 0){
					a--;
				}
				else{
					a = 9;
				}
				cout << a;
			}
		}
		
		g = g + 2;
		cout << endl;
	}
}

void pattern8(int n = 5){
    int a = 1;
	int g = 1;
	for(int i=0;i < n;i++){
		for(int j=0;j<n-i-1;j++){
			cout << " ";
		}
		for(int k=0;k<g;k++){
			cout << a;
		}
		
		g = g + 2;
		a++;
		cout << endl;
	}
	
	int c = 65 + n - 2;
	g = g-4;
	for(int i=0;i < n-1;i++){
		for(int k=0;k < i+1;k++){
			cout << " ";
		}
		for(int j=0;j<g;j++){
			cout << char(c);
		}
		c--;
		g -= 2;
		cout << endl;
	}
}

void pattern9(int n = 5){
    int g = 1;
	for(int i=0;i < n;i++){
		for(int j=0;j<n-i-1;j++){
			cout << " ";
		}
		for(int k=0;k<g;k++){
			if(k < i+1){
				cout << k+1;
			}
			else{
				cout << "*";
			}
		}
		
		g = g + 2;
		cout << endl;
	}
	g = g-4;
	for(int i=0;i < n-1;i++){
		for(int j=0;j<i+1;j++){
			cout << " ";
		}
		for(int k=g;k > 0;k--){
			if(k > g/2 + 1){
				cout << "*";
			}
			else{
				cout << k;
			}
		}
		
		g = g - 2;
		cout << endl;
	}
}

int setrow(){
	int n;
	cout << "\nCurrent Row Level is Set to 5" << endl;
	cout << "Enter a Number Between 1 to 15: ";
	cin >> n;
	cout << "You Entered New Row Level as: " << n << endl;
	return(n);
}

int main(){
	int k = 1;
	int n = 5;
	while(k){
		int a;
		cout << "\n1. Row Numbers " << "\n2.Row Numbers Backwards " << "\n3.Up Down Numbers " << "\n4.Up Numbers Down Alphabets" << "\n5.Alpha Numeric Alterante "<<endl;
		cout << "6.Consecutive Series"<< "\n7.Row Number Up Down"<<"\n8.Daimond Alpha Numeric" << "\n9.Daimond Alpha Star" << "\n10.Set Row Level" << endl;
		cout << "0.EXIT" << endl;
		cout << endl;
		cin >> a;
		if(a == 0){
			break;
		}
		if(a == 10){
			n = setrow();
		}
		else{
			if(a == 1){
				cout << "Row Numbers: " <<endl;
				pattern1(n);
			}
			if(a == 2){
				cout << "Row Numbers Backwards: " << endl;
				pattern2(n);
			}
			if(a == 3){
				cout << "Up Down Numbers: " << endl;
				pattern3(n);
			}
			if(a == 4){
				cout << "Up Numbers Down Alphabets: " << endl;
				pattern4(n);
			}
			if(a == 5){
				cout << "Alpha Numeric Alterante: " << endl;
				pattern5(n);
			}
			if(a == 6){
				cout << "Consecutive Series: " << endl; 
				pattern6(n);
			}
			if(a == 7){
				cout << "Row Number Up Down: " << endl;
				pattern7(n);
			}
			if(a == 8){
				cout << "Daimond Alpha Numeric: " << endl;
				pattern8(n);
			}
			if(a == 9){
				cout << "Daimond Alpha Star: " << endl;
				pattern9(n);
			}
		}
		
		char c;
		cout << "\nEnter Anything to Try Again: ";
		cin >> c;
	}
	return 0;
}

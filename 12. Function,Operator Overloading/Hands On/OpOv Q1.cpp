#include<iostream>
using namespace std;

class Date{
	private:
		int day;
		int mth;
		int year;
		
	public:
		Date(){
			day = 0;
			mth = 0;
			year = 0;
		}
		
		Date(int a,int b,int c){
			day = a;
			mth = b;
			year = c;
		}
		
		friend Date operator +(Date &,int);
		friend Date operator -(Date &,int);
		
		void print(void){
			cout <<"Date: " << day << " - " << mth << " - " << year << endl;
		}
};

Date operator +(Date& a,int n){
	Date d(a.day+n,a.mth,a.year);
	//return Date(a.day+n,a.mth,a.year);
	return(d);
}
		
Date operator -(Date& a,int n){
	Date d(a.day-n,a.mth,a.year);
	//return Date(a.day-n,a.mth,a.year);
	return(d);
}


int main(){
	Date d1(12,03,1997);
	Date d2(29,03,2000);
	
	int n;
	cout << "Enter n value: " << endl;
	cin >> n;
	
	Date d3 = d1 + n;
	Date d4 = d2 - n;
	cout << "Before: " << endl;
	d1.print();
	d2.print();
	
	cout << "\nAfter: " << endl;
	cout << "Added " << n << " days: ";
	d3.print();
	cout << "Subtracted " << n << " days: ";
	d4.print();
	return 0;
}

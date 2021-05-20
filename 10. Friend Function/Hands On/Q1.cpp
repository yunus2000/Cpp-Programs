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
	Date d1(12,03,1997),d2;
	
	int n;
	cout << "Enter n value: " << endl;
	cin >> n;
	
	d2 = d1 + n;
	d1.print();
	d2.print();
	
	
	return 0;
}

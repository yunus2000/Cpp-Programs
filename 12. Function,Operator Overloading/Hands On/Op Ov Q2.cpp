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
		
		Date operator --(){
			Date d2(0,0,0);
			d2.day = --day;
			d2.mth = --mth;
			d2.year = --year;
			return(d2);
		}
		
		Date operator --(int){
			Date d2(0,0,0);
			d2.day = this->day--;
			d2.mth = this->mth--;
			d2.year = this->year--;
			return(d2);
		}
		
		Date operator ++(){
			Date d2(0,0,0);
			d2.day = ++this->day;
			d2.mth = ++this->mth;
			d2.year = ++this->year;
			return(d2);
		}
		
		Date operator ++(int){
			Date d2(0,0,0);
			d2.day = this->day++;
			d2.mth = this->mth++;
			d2.year = this->year++;
			return(d2);
		}	
		
		void display(){
			cout << day << " - " << mth << " - " << year << endl;
		}	
};

int main(){
	Date d1(29,03,2000);
	Date d2(18,06,2001);
	
	cout << "Initially d1 is: ";
	d1.display();
	cout << "Initially d2 is: ";
	d2.display();
	Date d3,d4,d5;
	d5 = --d2;
	cout << "\nAfter d5 = --d2; d5 is: ";
	d5.display();
	cout << "d2 is: ";
	d2.display(); 
	d3 = ++d1;
	cout<< "\nAfter d3 = ++d1; d3 is: ";
	d3.display();
	cout << "d1 is: ";
	d1.display();
	d3 = d1++; 
	cout<< "\nAfter d3 = d1++; d3 is: ";
	d3.display();
	cout << "d1 is: "; 
	d1.display();
	d4 = d2--;
	cout<< "\nAfter d4 = d2--; d4 is: ";
	d4.display();
	cout << "d2 is: ";
	d2.display();
	
	return 0;
}

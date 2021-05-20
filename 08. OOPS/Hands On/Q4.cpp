#include<iostream>
using namespace std;

class book{
	private:
		int bookno;
		string booktitle;
		float price,total;
		float totalcost(int n){
			return(n*price);
		}
		
	public:
		void input(){
			cout << "Enter Book No: ";
			cin >> bookno;
			cout << "Enter Book Title: ";
			cin >> booktitle;
			cout << "Enter Price: ";
			cin >> price;
		}
		void purchase(){
			int n;
			cout << "Enter no of copies required: ";
			cin >> n;
			cout << "Total cost is: " << totalcost(n);
		}
};

int main(){
	book b;
	b.input();
	b.purchase();
	return(0);
}

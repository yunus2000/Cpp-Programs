#include<iostream>
using namespace std;

class student{
	private:
		int admno;
		string sname;
		float eng,math,science,total;
		float ctotal(){
			return(eng+math+science);
		}
	public:
		void readdata(){
			cout << "Enter Adm Num: ";
			cin >> admno;
			cout << "Enter name: ";
			cin >> sname;
			cout << "Enter Marks in English, Maths and Science: ";
			cin >> eng >> math >> science;
			total = ctotal();
		}
		void displaydata(){
			cout << "Student Adm Num is: " << admno << endl;
			cout << "Student name is: " << sname << endl;
			cout << "Student Marks in English: "<< eng <<"\nMaths: " << math << "\nScience: " << science << endl;
			cout << "Total Score is: " << total;
		}
};

int main(){
	student s;
	s.readdata();
	s.displaydata();
	return(0);
}

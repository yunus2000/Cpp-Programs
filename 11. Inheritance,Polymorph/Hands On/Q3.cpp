#include<iostream>
using namespace std;

class person{
	public:
		string name,address;
		int age;
	
};

class student:public person{
	public:
		int year;
		string course,clgname;
		
		student(string na,string ad,int ag,int y,string crs,string cnam){
			year = y;
			course = crs;
			clgname = cnam;
			age = ag;
			address = ad;
			name = na;
		}
		
		void print(){
			cout << "Student "<<"\nName: " << name << "\nAddress: " << address << "\nAge: " <<age <<"\nYear: " << year << "\nCourse: "<<course<<"\nCollege Name: "<<clgname << endl;
		}
		~student(){
			cout << "Destructor of Student is called!!" << endl;
		}
};

class employee: public person{
	public:
		int salary,empno;
		string joindate;
		employee(string na,string ad,int ag,int s,int eno,string jda){
			salary = s;
			joindate = jda;
			empno = eno;
			age = ag;
			address = ad;
			name = na;
		}
		
		void print(){
			cout << "\nEmployee "<<"\nName: " << name << "\nAddress: " << address << "\nAge: " <<age <<"\nSalary: " << salary << "\nEmployee Number: "<<empno <<"\nJoining Date: "<<joindate << endl;
		}
		
		~employee(){
			cout << "Destructor of Employee is called!! " << endl;
		}
};

int main(){
	student s("Cat","house",28,2000,"meow","meowersity");
	employee e("Peter","England",23,700000,144,"29-03-2000");
	
	s.print();
	e.print();
	return(0);
}

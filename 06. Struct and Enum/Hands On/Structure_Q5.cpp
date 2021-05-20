#include<iostream>
#include<string.h>
using namespace std;

struct EMP{
	char ename[50];
	int eid;
	int eage;
	float esalary;
};

void print(EMP *e){
	cout << "\nName is: " << e->ename << "\nID is: " << e->eid << "\nAge is: " << e->eage << "\nSalary is: " << e->esalary;
}

int main(){
	EMP e;
	char s[50];
	int id,age, sal;
	
	cout << "Enter Name: ";
	cin >> s;
	strcpy(e.ename,s);
	cout << "Enter ID: ";
	cin >> e.eid;
	cout << "Enter Age:";
	cin >> e.eage;
	cout << "Enter Salary: ";
	cin >> e.esalary;
	
	print(&e);
	
	return 0;
}

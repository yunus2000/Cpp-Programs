#include<iostream>
using namespace std;

struct EMP{
	char emp_name[50];
	int emp_id;
	int emp_age;
	int emp_salary;
};

int main(){
	EMP *e1,*e2,*e3;
	
	e1 = new struct EMP;
	e2 = new struct EMP;
	e3 = new struct EMP;
	
 	cout<<"Enter details for first user"<<endl;
    cin>>e1->emp_name>>e1->emp_id>>e1->emp_age>>e1->emp_salary;

    cout<<"Enter details for second user"<<endl;
    cin>>e2->emp_name>>e2->emp_id>>e2->emp_age>>e2->emp_salary;

    cout<<"Enter details for third user"<<endl;
    cin>>e3->emp_name>>e3->emp_id>>e3->emp_age>>e3->emp_salary;


    cout<<"Details of all three users"<<endl;
    cout<<e1->emp_name<<" "<<e1->emp_id<<" "<<e1->emp_age<<" "<<e1->emp_salary<<endl;
    cout<<e2->emp_name<<" "<<e2->emp_id<<" "<<e2->emp_age<<" "<<e2->emp_salary<<endl;
    cout<<e3->emp_name<<" "<<e3->emp_id<<" "<<e3->emp_age<<" "<<e3->emp_salary;
	
	return 0;
}

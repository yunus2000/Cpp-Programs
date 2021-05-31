#include <iostream>
#include<string>
#include<fstream>
using namespace std;

struct EMP {
   string empname;
   int empid;
   struct EMP *next;
   struct EMP *prev;
};
struct EMP* head = NULL;

void insert() {
	string s;
	int n;
	cout << "\nEnter Employee Name: ";
	cin >> s;
	cout << "Enter Employee ID: ";
	cin >> n;
   EMP *newnode = new EMP[1];
   newnode->empname = s;
   newnode->empid = n;
   newnode->prev = NULL;
   newnode->next = head;
   if(head != NULL){
   head->prev = newnode ;
   head = newnode;}
}

int deletenode(){
	int n;
	cout << "\nEnter Employee ID you needed to Delete: ";
	cin >> n;
	struct EMP *last;
	last = head;
	while(last != NULL){
		if(last->empid == n){
			return deletethisnode(last); 
		}
	}
	return 0;
}

int deletethisnode(EMP &last){
    last.prev = last.next;
	if(last.prev == NULL){
		//last->prev = last->next;
		return 1;
	}
	if(last.next == NULL){
		//last->prev = last->next;
		
		return 3;
	}
	else{
		//last->prev = last->next;
		return 2;
	}
}

int searchnode(){
	int n;
	cout << "\nEnter the Employee ID you need to Search: ";
	cin >> n;
	struct EMP *last;
	last = head;
	while(last != NULL){
		if(last->empid == n){
			return 1;
		}
	}
	return 0;
}

void display() {
   struct EMP* ptr;
   ptr = head;
   while(ptr != NULL) {
      cout<< "\nEMP Name: "<< ptr->empname << endl;
      cout << "EMP id: " << ptr->empid << endl;
      ptr = ptr->next;
   }
}

void cleanup(){
	delete[] newnode;
	delete EMP;
}

int main() {
	int trig = 1;
   while(trig){
   	cout << "\n1. Add Node" << "\n2. Delete Node" << "\n3. Search Node" << "\n4. Display List" << "\n5. Cleanup" << "\n6. EXIT" << endl;
   	cout << "\nEnter Any option From Above: " << endl;
   cin >> trig;
   
   if(trig == 6){
   	cleanup();
   	break;
   }
   
   if(trig == 1){
   	insert();
   }
   
   if(trig == 2){
   	cout << deletenode() << endl;
   }
   
   if(trig == 3){
   	cout << searchnode() << endl;
   }
   
   if(trig == 4){
   	display();
   }
   
   if(trig == 5){
   	cleanup();
   }
   
   }
   
   return 0;
}

#include <iostream>
using namespace std;
struct Node { 
   int data; 
   struct Node *prev; 
   struct Node *next; 
}; 
struct Node* head = NULL; 
void insert(int newdata) { 
    Node* newnode = new Node[1];
   //struct Node* newnode = (struct Node*) malloc(sizeof(struct Node)); 
   newnode->data  = newdata; 
   newnode->next = NULL;
   Node *last = new Node[1];
   last = head;
   if(head ==  NULL) 
      head->prev = NULL;      
      head = newnode; 
    while(last->next != NULL){
        last = last->next;
    }
    last->next = newnode;
    newnode->prev = last;
}   
void display() { 
   struct Node* ptr;
   ptr = head;  
   while(ptr != NULL) { 
      cout<< ptr->data <<" "; 
      ptr = ptr->next; 
  } 
} 
int main() { 
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The doubly linked list is: ";
   display(); 
   return 0; 
}

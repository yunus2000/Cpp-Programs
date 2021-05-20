#include<iostream>
using namespace std;

class queue{
	public:
		int front = -1, rear = -1;
		int capac;
		//int a[capac];
		queue(int n){
			if(n == 0){
				capac = 10;
			}
			else{
				capac = n;
			}
			cout << "Queue is created!!" << endl;
		}
		
		void add(int n,int *a){
			if(rear == capac-1){
				cout << "Queue is Full!!" << endl;
			}
			else{
				rear++;
				front = 0;
				a[rear] = n;
			}
		}
		
		void remove(int *a){
			if(front == -1 || front > rear){
				cout << "Queue is Empty!!" << endl;
			}
			else{
				cout <<  a[front] << " is deleted from queue " << endl;
				front++;
			}
		}
		
		int getfront(int *a){
			return(a[front]);
		}
		
		int isfull(void){
			if(rear == capac-1){
				return(1);
			}
			else{
				return(0);
			}
		}
		
		int isempty(void){
			if(rear-front >0){
				return(0);
			}
			else{
				return(1);
			}
		}
		
};

int main(){
	
	int n;
	cout << "Enter the size: " << endl;
	cin >> n;
	queue q(n);
	int a[n];
	
	int trig = 1;
	while(trig){
		cout << "\nType: \n1 to Add ||" << " 2 to Remove ||" << " 0 to Stop " << endl;
		cin >> trig;
		if(trig == 0){
			break;
		}
		if(trig == 1){ 
			int n1;
			cout << "Enter the number to add: " << endl;
			cin >> n1;
			q.add(n1,a);
		}
		if(trig == 2){
			q.remove(a);
		}
	}
	
	return 0;
}

#include<iostream>
using namespace std;

template<class t>
class vector{
	t a[10];
	public:
		vector(){
			for(int i=0;i<10;i++){
				a[i] = 0;
			}
		}
		
		vector(t k[]){
			for(int i=0;i<10;i++){
				a[i] = k[i];
			}
		}
		
		t sum(t k[]){
			t sum = 0;
			for(int i=0;i<10;i++){
				sum += *k;
			}
			return sum;
		}
		
		t max(){
			t max = a[0];
			for(int i=0;i<10;i++){
				if(a[i] > max){
					max = a[i];
				}
			}
			return max;
		}
		
		t min(t k[]){
			t min = *k;
			for(int i=0;i<10;i++){
				if(*k < min){
					min = *k;
				}
				*k++;
			}
			return min;
		}
		
		void sort(t a[],int n){
			for(int i=0;i<n-1;i++){
				for(int j=i+1;j<n;j++){
					if(a[i] > a[j]){
						t c = a[i];
						a[i] = a[j];
						a[j] = c;
					}
				}
			}
		}
		
		~vector(){
			cout << "Destructor of Vector class!!!" << endl;
		}
};

int main(){
	int a1[10];
	cout << "Give Integer Array of 10 Elements: " << endl;
	for(int i=0;i<10;i++){
		cin >> a1[i];
	}
	
	char a2[10];
	cout << "Give Character Array of 10 Elements: " << endl;
	for(int i=0;i<10;i++){
		cin >> a2[i];
	}
	
	double a3[10];
	cout << "Give Double Array of 10 Elements: " << endl;
	for(int i=0;i<10;i++){
		cin >> a3[i];
	}
	
	vector<int> v1(a1);
	vector<char> v2(a2);
	vector<double> v3(a3);
	
	cout << "Initial Integer Array is: ";
	for(int i=0;i<10;i++){
		cout << a1[i] << " ";
	}
	cout << endl;
	v1.sort(a1,10);
	cout << "Sorted Integer Array is: ";
	for(int i=0;i<10;i++){
		cout << a1[i] << " ";
	}
	cout << endl;
	cout << "Max: " << v1.max() << endl;
	cout << "Min: " << v1.min(a1) << endl;
	
	cout << "\nInitial Character Array is: ";
	for(int i=0;i<10;i++){
		cout << a2[i] << " ";
	}
	cout << endl;
	v2.sort(a2,10);
	cout << "Sorted Character Array is: ";
	for(int i=0;i<10;i++){
		cout << a2[i] << " ";
	}
	cout << endl;
	cout << "Max: " << v2.max() << endl;
	cout << "Min: " << v2.min(a2) << endl;
	
	cout << "\nInitial Double Array is: ";
	for(int i=0;i<10;i++){
		cout << a3[i] << " ";
	}
	cout << endl;
	v3.sort(a3,10);
	cout << "Sorted Double Array is: ";
	for(int i=0;i<10;i++){
		cout << a3[i] << " ";
	}
	cout << endl;
	cout << "Max: " << v3.max() << endl;
	cout << "Min: " << v3.min(a3) << endl;
	
	return 0;
}

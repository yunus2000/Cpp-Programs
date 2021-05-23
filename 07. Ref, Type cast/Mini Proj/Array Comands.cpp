#include<iostream>
using namespace std;

int main(){
	char c = ' ';
	int *a = NULL;
	int n,i = 0;
	while(c != 'N'){
		cout << "\nC - Create Array" << "\nA - Add Element to Array" << "\nD - Delete the last Added Element int the Array" << "\nR - Replace value at the Specified Index with given Value" <<endl;
		cout << "P - Print Array" << "\nE - Erase Array" << "\nN - Exit!!\n" << endl;
		cin >> c;
		if(c == 'N'){
			break;
		}
		if(c == 'C'){
			cout << "Create Array: " << endl;
			cout << "\nEnter the Size of the Array: ";
			cin >> n;
			a = new int[n];
		}
		if(c == 'A'){
			cout << "Add Element to Array: " << endl;
			cout << "\nEnter the element you need to Add: ";
			cin >> a[i];
			i++;
		}
		if(c == 'D'){
			cout << "Delete Last Added Element: " << endl;
			i--;
		}
		if(c == 'R'){
			int k,val;
			cout << "Replace value at the Specified Index with given Value: " << endl;
			cout << "\nEnter the Index: ";
			cin >> k;
			cout << "Enter the Value: ";
			cin >> val;
			a[k] = val;
		}
		if(c == 'P'){
			cout << "Print Array: \n" << endl;
			for(int j=0;j<i;j++){
				cout << a[j] << " ";
			}
			cout << endl;
		}
		if(c == 'E'){
			cout << "Erase Array: " << endl;
			delete [] a;
		}
	}
	
	return 0;
}

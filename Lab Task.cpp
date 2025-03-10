#include<iostream>
using namespace std;
int main(){
	
	int num = 2;
	int* ptr = &num;
	 
	 cout << "Value of num:" << num << endl;
	  *ptr=6;
	cout << "Modified value of num: " << num << endl;
	cout << "Value changed by ptr:" << *ptr << endl;
	return 0;
	
}
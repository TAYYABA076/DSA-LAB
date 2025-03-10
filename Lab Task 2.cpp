#include<iostream>
using namespace std;
 
int findMax(int arr[],int n){
int max = arr[0];
 for(int i=1;i<n;i++){
 	if (arr[i] > max)
 	max = arr[i];
 }
 return max;
}
 int main(){
 	int arr[] = {1,3,5,7,9};
 	cout << "Maximum Value: " << findMax(arr,5) << endl;
 	return 0;
 }

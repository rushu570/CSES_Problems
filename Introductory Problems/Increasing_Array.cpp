#include<iostream>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	long long int arr[n];
	long long int count=0;
	long long int diff=0;
	
	for(int i=0;i<n;i++){

		cin>>arr[i];
		}
	for(int j=1;j<n;j++){
		if(arr[j-1]==arr[j]){
			continue;
		}
		if(arr[j-1]>arr[j]){
			diff=arr[j-1]-arr[j];
			arr[j]+=diff;
			count+=diff;
		}

	}
	cout<<count;
	return 0;
}
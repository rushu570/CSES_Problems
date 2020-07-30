#include<iostream>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	long long int arr[n]={0};
	arr[n]=0;
	for(int i=1;i<=n-1;i++){
		long long int h;
		cin>>h;
		arr[h]=1;
}
for(int j=1;j<=n;j++){
	if(arr[n]==0){
		cout<<n;
		break;
	}
	if(arr[j]==0){
		cout<<j;
	}
}
}
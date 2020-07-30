#include<iostream>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	if(n==3 or n==2){
		cout<<"NO SOLUTION";
		return 0;
	}
	long long int y;
	if(n%2!=0){
		y=n+1;
		for(int i=1;i<=y;i+=2){
		cout<<i<<" ";
	}
	
	for(int i=2;i<=y-1;i+=2){
		cout<<i<<" ";}
		return 0;
	}

	else{
		y=n;
		for(int i=2;i<=y;i+=2){
		cout<<i<<" ";}
	
		for(int i=1;i<=y;i+=2){
		cout<<i<<" ";
	}
	return 0;}
	
	
		
	return 0;
	
}
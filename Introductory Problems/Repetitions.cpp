#include<iostream> 
#include <string>
using namespace std; 
int main() 
{ 
  
   string str ;
cin>>str;
    long long int len = str.length(); 
    
    long long int count = 0; 
    long long int curr=1;
    for(int i=1;i<len;i++){
        if(str[i]!=str[i-1]){
            count=max(count,curr);
            curr=0;
        }
        curr++;

    }
    count = max(count, curr);
    cout << count;
    
    return 0; 
} 
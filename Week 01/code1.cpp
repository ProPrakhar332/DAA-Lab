#include<iostream> 
using namespace std; 
int main(){
int t;
cin>>t;     
while(t--){         
int n,key,count=0,i;         
cin>>n;          
int arr[n];         
for(i=0;i<n;i++)             
cin>>arr[i];         
cin>>key;         
for(i=0;i<n;i++) {             
count++;             
if(key==arr[i])                 
break; 
       		 } 
       		 if(i==n) 
            			cout<<"Not Present ";         else 
            		cout<<"Present "; 
        		cout<<count<<endl; 
   	 } 
    	return 0; 
} 

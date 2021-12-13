#include<iostream> 
using namespace std; 
int binarySearch(int arr[], int n, int key, int *count){
int l=0,u=n-1,mid,k=0;
while(l<=u){
         	mid=(l+u)/2;
         	(*count)++;
if(arr[mid]==key){ 
            			k=1; 
            			break; 
        		}	 
        		else if(arr[mid]>key) 
            			u=mid-1;
else
             l=mid+1; 
    	} 
    	return k; 
} 
 
int main(){ 
    int t;     
    cin>>t;     
    while(t--){         
        int n,key,count=0,k; 
        cin>>n;         
        int arr[n];         
        for(int i=0;i<n;i++)             
        cin>>arr[i];         
        cin>>key; 
        k=binarySearch(arr,n,key,&count);         
        if(k==1)             
        cout<<"Present ";         
        else 
            cout<<"\nNot Present ";         
            cout<<"\nTotal Comparisions "<<count<<endl; 
    } 
    return 0; 
} 

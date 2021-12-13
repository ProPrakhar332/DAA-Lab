#include<iostream>
using namespace std; 
 
int linearSearch(int arr[], int l, int u, int key, int *count){     for(int i=l;i<=u;i++){         (*count)++;         if(arr[i]==key)             return 1; 
    } 
    return 0; 
} 
 
int newSearch(int arr[], int n, int key, int *count){     int i=1,k=0;     while(i<n){         (*count)++;         if(arr[i]>key) 
            return linearSearch(arr,i/2,i,key,count);         i=2*i;         if(2*i>n-1) 
            return linearSearch(arr,i/2,n-1,key,count); 
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
        k=newSearch(arr,n,key,&count);         if(k==1)             cout<<"Present ";         else             cout<<"Not Present "; 
        cout<<count; 
    } 
    return 0; 
} 

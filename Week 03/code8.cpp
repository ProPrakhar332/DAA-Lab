#include<bits/stdc++.h> 
using namespace std; 
 
void selectionSort(int arr[], int l, int r, int &compare, int &swaps) {     int min;     for(int i=l;i<r;i++) {         min=i; 
        for(int j=i+1;j<=r;j++) {             compare++;             if(arr[min]>arr[j]) 
                min=j; 
        } 
        if(min!=i) { 
            swap(arr[i],arr[min]);             swaps++; 
        } 
    } 
} 
 
int main(){ 
    int t;     cin>>t; 
    while(t--){ 
        int n,compare=0,swaps=0; 
        cin>>n;         int arr[n];         for(int i=0;i<n;i++) 
            cin>>arr[i]; 
        selectionSort(arr, 0, n-1, compare, swaps); 
        for(int i=0;i<n;i++)             cout<<arr[i]<<" "; 
        cout<<"\ncomparisons = "<<compare<<endl;         cout<<"swaps ="<<swaps<<endl; 
    } 
    return 0; 
} 	 

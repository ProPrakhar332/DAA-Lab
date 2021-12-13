#include<iostream>
#include<vector>
using namespace std;
int printCommon(vector<int> arr1,vector<int> arr2) {
    int i=0,j=0;
    int len1=arr1.size(),len2=arr2.size();
    while(len1 > i && len2 > j){
        if (arr1[i] < arr2[j]) { 
            i++;
        }
        else if(arr2[j] < arr1[i])
            j++;
        else{
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    } 
}
int main(){
    int l,n,m;
    cin>>n;
    vector<int> a,b;
    for(int i=0;i<n;i++){
        cin>>l;
        a.push_back(l);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>l;
        b.push_back(l);
    }
    cout<<"Common: ";
    printCommon(a,b);
    return 0;
}
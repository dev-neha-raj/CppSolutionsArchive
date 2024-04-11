#include <bits/stdc++.h>
using namespace std;
int replace(int arr[],int n){
    for(int i=0;i<n;i++){
        set<int> s;
        for(int j=0;j<n;j++){
            if(arr[j]<arr[i]){
                s.insert(arr[j]);
            }cout<<s.size<< ;
        }
        
    }
}
int main(){
    int n;
    cout<<"Enter the value of elements:"<<endl;
    cin>>n;
    cout<<endl;
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
} replace(arr,n);
}

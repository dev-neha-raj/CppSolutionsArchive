#include <iostream>
#include <math.h>
using namespace std;
bool prime_in_range(int n){
    if(n==1)
    return false;
for(int i=2;i<sqrt(n);i++){
    if(n%i==0){
    return false;
    }
return true;
}
}

int main(){
int n1,n2;
cout<<"Enter number1"<<endl;
cin>>n1;
cout<<"Enter number2"<<endl;
cin>>n2;
for(int i=n1;i<=n2;i++){
    if (prime_in_range(i)){
    cout<<i<<" ";
    }  
}    
}
//check if prime number..
#include <iostream>
using namespace std;
bool isPrime(int num){
for(int i=2;i<num;i++){
    if(num%i==0){
        return false;      
    }
}
return true;
}
int main()
{
    int n;
 cout<<"Enter the number"<<endl;
 cin>>n;
 bool ans=isPrime(n);
 if(ans==true){
    cout<<"prime number";}
    else{
        cout<<"Not a prime number";
 }
 return 0;
}

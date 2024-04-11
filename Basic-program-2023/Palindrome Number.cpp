#include <bits/stdc++.h>
using namespace std;
int reverse(int x){
    int y=0;
    while(x>0){
        int digit= x%10;
        y=y*10+digit;
        x=x/10;}
        return y;
    }
int main(){
    int n,dummy,y;
    cout<<"Enter the number"<<endl;
    cin>>n;
    dummy=n;
    y=reverse(n);
    if (y==dummy){
        cout<<"It is palindrome"<<endl;
    }
   else{
cout<<"It is not palindrome"<<endl;
   }
  return 0; 
}
//Problem was with braces...

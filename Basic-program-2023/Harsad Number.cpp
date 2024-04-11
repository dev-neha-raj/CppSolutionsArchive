#include <bits/stdc++.h>
using namespace std;
bool isHarshad(int n){
 int digit;int sum=0;
while(n !=0){
digit=n%10;
sum=sum+digit;
n=n/10;
}
if(n%sum==0){
    return true;
}
else{
    return false;
}
}

int main()
{
    int n;
cout<<"Enter the number:"<<endl;
cin>>n;
bool ans=isHarshad(n);
if(ans==true)
cout<<"Harshad number"<<endl;
else{
cout<<"Not a harshad number"<<endl;
}
return 0;
}
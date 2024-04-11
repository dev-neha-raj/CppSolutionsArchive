#include <bits/stdc++.h>
using namespace std;

int greatestDivisor(int n1, int n2){
    int ans=1;
for (int i=1;i<=min(n1,n2);i++)
if(n1%i==0 && n2%i==0){
   ans=i;
}
return ans;,
    }

int main()
{
    int a,b;
cout<<"Enter the numbers:";
cin>>a>>b;
cout<<"The greatest common divisor is:";
int gcd=greatestDivisor(a,b);
cout<<gcd;
return 0;
}
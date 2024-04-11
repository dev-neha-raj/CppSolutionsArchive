#include <bits/stdc++.h>
using namespace std;
int fact(int n){
    int ans=1;
for(int i=1;i<=n;i++){
    if(n%i==0){
     ans=i;
    }
}
return ans;
}

int main()
{
int n=6,r=4;
int num=fact(n);
int den=fact(n-r);
cout<<num/den;
return 0;
}
#include <bits/stdc++.h>
using namespace std;
int sum_of_prime(int num){
if(num==1 || num==0){
    return 0;
}
for(int i=2;i<=n;i++){
    if(n%i==0){
        return false;
    } else{
        return true;
        cout<<i<<" ";
    }
    
}

}
int main()
{
    int n;
cout<<"Enter the number:";
cin>>n;
sum_of_prime(n);
return 0;
}
/*
number as two prime numbers
74= 71+3
6 = 3 + 3
10 = 3 + 7
14 = 3 + 11 = 7 + 7
20 = 3 + 17 = 7 + 13
30 = 7 + 23 = 13 + 17

1,2,3,4,5,6,7,8,9,10








*/

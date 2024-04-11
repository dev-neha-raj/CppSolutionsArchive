#include <bits/stdc++.h>
using namespace std;
int gcd(int n1, int n2) {
    if(n2==0)
    return n1;
    return gcd(n2,n1%n2);
    
}
int main(){
  int n1,n2;
cout<<"Enter the number:";
cin>>n1>>n2;
int g=gcd(n1,n2);
int lcm=(n1*n2)/g;
cout<<"The least common denominator is:"<<lcm;
return 0;  
}



























/*
#include <bits/stdc++.h>
using namespace std;
int Lcm(int n1, int n2){
    int ans=1;
for(int i=1;i<=min(n1,n2);i++){
    if(n1%i==0 && n2%i==0){
        ans=i;
    }  
}
int lcm=(n1*n2)/ans;
return lcm;
}

int main()
{
int n1,n2;
cout<<"Enter the number:";
cin>>n1>>n2;
int x=Lcm(n1, n2);
cout<<"The least common denominator is:"<<x;
return 0;
}

The function Lcm() in the code you provided is calculating the LCM incorrectly. The logic inside the for loop is trying to find the GCD of n1 and n2 by iterating from 1 to the minimum of n1 and n2 and checking if each number divides both n1 and n2. However, this is not an efficient or correct way to find the GCD.

To find the LCM of two numbers, we can use the formula:

LCM(a, b) = (a x b) / GCD(a, b)

So, we need to first find the GCD of n1 and n2 and then use this to calculate the LCM.*/
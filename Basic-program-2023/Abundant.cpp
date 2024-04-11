#include <bits/stdc++.h>
using namespace std;

void Abundant_num(int n){
int sum=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(n%i==i){
                sum=sum+i;
        }
        else{
            sum +=i;
            sum +=n/i;
        }
    }}
    sum -=n;
    if(n<sum){
        cout<<"Abundant number"<<endl;
    }
    else{
        cout<<"Not an Abundant number"<<endl;
    }
}

int main()
{
    int n;
cout<<"Enter the number:";
cin>>n;
Abundant_num(n);
return 0;
}

/*
Inside the function, we first initialize a variable sum to 0, which will hold the sum of the divisors of n.

We then use a for loop to iterate over all the divisors of n. The loop runs from i=1 to i=sqrt(n), because any divisors of n greater than sqrt(n) would already have been counted earlier in the loop.

Inside the loop, we use an if statement to check if i is a divisor of n (i.e., if n is divisible by i). If it is, we add i to the sum.

We also use another if statement inside the first if statement to check if i is equal to the square root of n. If it is, we don't need to add the quotient (n/i) to the sum, because it would have been counted earlier in the loop.

After the loop, we subtract n from sum to get the sum of the proper divisors of n.
*/
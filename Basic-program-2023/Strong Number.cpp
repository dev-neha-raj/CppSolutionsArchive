#include <bits/stdc++.h>
using namespace std;

int strongNum(int num){
int sum=0; int temp=num;
while(temp!=0){
int digit=temp%10;
int fact=1;
 for(int i=digit;i>=1;i--){
        fact=fact*i;
    }
    sum=sum+fact;
temp=temp/10;
}
if(sum==num){
    cout<<"Strong number"<<endl;
}
else{
    cout<<"Not a strong number"<<endl;
}
}

int main()
{
int n;
cout<<"Enter the number:";
cin>>n;
strongNum(n);
return 0;
}

//strong number means the factorial of the digit is equal to the number.
/* 
Firstly, the return type of the strongNum function is declared as a boolean (bool), but it does not return any boolean value. Instead, it prints the result to the console using cout. You should either change the return type of the function to void (since it doesn't actually return anything) or modify it to actually return a boolean value.

Secondly, the condition "if(sum==true)" in the strongNum function is not checking for the correct condition. The sum variable holds the sum of the factorials of the digits of the input number, but the expression "sum==true" does not check if this sum is a "strong number". Instead, you should check if the sum is equal to the original input number.

Finally, the loop in the strongNum function that calculates the factorial of the digits is incorrect. The loop variable i should start from the value of temp (the current digit) and decrement down to 1, multiplying the previous result by i at each step.

*/
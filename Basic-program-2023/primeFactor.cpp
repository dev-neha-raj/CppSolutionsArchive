#include <iostream>
#include <math.h>
using namespace std;
void primeFactor(int n){
if(n%2==0)
{cout<<2;
}

for(int i=3;i<=sqrt(n);i=i+2){
    while(n%i==0){
        cout<<i;
        n=n/i;
    }
}
if(n>2){
    cout<<n<<endl;
}
    
}
int main()
{
int n;
cout<<"Enter the value:";
cin>>n;
primeFactor(n);
cout<<endl;
return 0;
}


/*The primeFactors function is defined that takes an integer n as input and returns nothing (i.e., void return type).

Inside the primeFactors function, the first step is to check if the number n is divisible by 2 using a while loop.

If n is divisible by 2, it is a prime factor of n. So, the function prints 2 as a prime factor and updates the value of n to n/2.

The while loop keeps running until n is no longer divisible by 2.

After checking all the factors of 2, the function enters a for loop that starts from 3 and iterates up to the square root of n.

The for loop increments by 2 at each iteration because if a number is not divisible by 2, it won't be divisible by any even number. This saves some time as it skips even numbers.

Inside the for loop, the function checks if n is divisible by the current value of i using a while loop.

If n is divisible by i, it means i is a prime factor of n. So, the function prints i as a prime factor and updates the value of n to n/i.

The while loop keeps running until n is no longer divisible by i.

After checking all the prime factors up to the square root of n, the function checks if n itself is a prime number greater than 2. If it is, the function prints n as a prime factor.

Finally, the function returns nothing and control returns to the main function.

Inside the main function, an integer n is defined and initialized to 315. The primeFactors function is called with n as an argument.

The program prints all the prime factors of n on the console (in this case, 3, 3, 5, and 7) and returns 0, indicating successful completion of the program.*/



/*In the for loop, the condition for iterating is i <= sqrt(n). Here, sqrt(n) returns the square root of n as a double value, but i is an integer variable.

However, when an integer value is compared to a floating-point value in C++, the integer is automatically converted to a floating-point value before the comparison is made.

In this case, i will be implicitly converted to a double before the comparison with sqrt(n) is made. Therefore, the for loop will work correctly as expected and will iterate up to the largest integer less than or equal to sqrt(n).*/
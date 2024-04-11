#include <bits/stdc++.h>
using namespace std;

void MaxMindigit(int num,int& maxi,int& mini){
maxi=INT_MIN;
mini=INT_MAX; 
while(num !=0){
int digit=num%10;
maxi =max(digit,maxi);
mini =min(digit,mini);
num=num/10;
    }
}

int main()
{
int n,maxi,mini;
cout<<"Enter the number:";
cin>>n;
MaxMindigit(n,maxi,mini);
cout<<"Maximum:"<<maxi<<endl;
cout<<"Minimum:"<<mini<<endl;
return 0;
}



/*#include <bits/stdc++.h>
using namespace std;

int MaxMindigit(){
    int max=INT_MIN; int min=INT_MAX; int num;
while(num !=0){
int digit=num%10;
int Max_num =max(digit,INT_MIN);
int Min_num =min(digit,INT_MAX);
num=num/10;
    }
}

int main()
{
int n;
cout<<"Enter the number:";
cin>>n;
cout<<"Maximum:"<<Max_num()<<endl;
cout<<"Minimum:"<<Min_num()<<endl;
return 0;
}*/
/* There are a few issues with the code you provided.

Firstly, the MaxMindigit() function is missing a return statement. It is declared as returning an int, but there is no return statement in the function body.

Secondly, the Max_num and Min_num variables are declared inside the while loop, which means that they will be re-initialized to their default values in every iteration of the loop. This will not give you the correct maximum and minimum values of the digits in the input number.

Thirdly, the max() and min() functions are used incorrectly. These functions take two arguments and return the maximum or minimum of the two. In the code, the second argument for both functions is given as INT_MIN and INT_MAX, which are the minimum and maximum values for an int. This does not make sense, as these values will always be greater than or equal to any digit in the input number. Instead, you should compare the current digit to the current maximum and minimum values, and update them if necessary. */




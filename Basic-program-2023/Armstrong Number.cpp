#include <iostream>
using namespace std;
bool isArmstrong(int n){
    int original_num=n;int sum=0;   
    while(original_num !=0){
        int remainder;    
        remainder=original_num%10;
        sum=sum+remainder*remainder*remainder;
        original_num=original_num/10;}
    if(sum==n){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
int num;
 cout<<"Enter the number"<<endl;
 cin>>num;
 bool ans=isArmstrong(num);
 if(ans==true)
 cout<<"It is an armstrong number"<<endl;
 else
 cout<<"It is not an armstrong number"<<endl;
 }

/*One issue with the current implementation of the isArmstrong function is that the return statements are inside the while loop. This means that the function will return either true or false after checking only the first digit of the input number. To fix this, we need to move the return statements outside the while loop so that the function checks all digits before returning a result*/
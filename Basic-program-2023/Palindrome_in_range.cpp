//palindrome in range
#include <iostream>
using namespace std;
bool isPalindrome(int n){
    int rev=0;
    int temp=n;
    while(temp!=0){
    rev=rev*10+temp%10;
    temp=temp/10;
    }
    if(n==rev)
    return true;
    else
    return false;
}

int main()
{
 int min=100; int max=200;
 for (int i=min; i<=max; i++){
if(isPalindrome(i)){
    cout<<i<<" ";
 }
 }
 return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n; int digit=0;
cout<<"Enter the number: ";
cin>>n;
while(n!=0){
digit=digit*10+n%10;
n=n/10;
}
cout<<"The reversed number are:"<<digit<<endl;
return 0;
}
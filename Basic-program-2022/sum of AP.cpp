//sum of Ap series..
//sum=a+(n-1)*d
#include <iostream>
using namespace std;
int main(){
int a,n,d; float sum;
cout<<"Enter the first term:";
cin>>a;cout<<endl;
cout<<"Enter the number of terms:";
cin>>n;cout<<endl;
cout<<"Enter the common difference:";
cin>>d;cout<<endl;
sum=  n/2*(2*a+(n-1)*d);
cout<<"The sum is:"<<sum<<endl;	
}

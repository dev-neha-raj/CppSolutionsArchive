#include <iostream>
using namespace std;
float apSum(float a, float d, int n){
float sum=0;
for (int i=0; i<n; i++){
    sum=sum+a;
    a=a+d;
}
return sum;
}
int main()
{
float a,d; int n;
cout<<"Enter the first term: ";
cin>>a;
cout<<"Enter the common difference: ";
cin>>d;
cout<<"Enter the number of terms: ";
cin>>n;
cout<<endl;
cout<<"The sum of the AP series are: " <<apSum(a,d,n) <<endl;
return 0;
}

/*int apSum(int a, int d, int n){
int sum=0;
int an=a+(n-1)*d;

for (int i=1; i<=n-1; i++){
    sum=sum+an;
}
} there is a logical error in the code, as the sum of the series is not being computed correctly. The code only calculates the last term 'an', and then adds it to the sum 'n-1' times, instead of adding the terms of the series one by one*/
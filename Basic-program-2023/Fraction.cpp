#include <bits/stdc++.h>
using namespace std;

float fraction(float n1, float d1,float n2, float d2){
float x=((n1*d2)+(n2*d1))/(d1+d2);
return x;
}
int main()
{
    float n1,n2,d1,d2;
cout<<"Enter numerator1:";
cin>>n1;
cout<<endl;
cout<<"Enter denominator1:";
cin>>d1;
cout<<endl;
cout<<"Enter numerator2:";
cin>>n2;
cout<<endl;
cout<<"Enter denominator2:";
cin>>d2;
cout<<endl;
 cout << "The sum of the fractions is: " << fraction(n1, d1, n2, d2) << endl;
return 0;
}
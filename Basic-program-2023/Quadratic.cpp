#include <bits/stdc++.h>
using namespace std;


#include <bits/stdc++.h>
using namespace std;

void quadratic(int a, int b, int c){
    float discriminant=((b*b)-(4*a*c));
    if(discriminant>0){
        float quad1=(-b+sqrt(discriminant))/(2*a);
        float quad2=(-b-sqrt(discriminant))/(2*a);
        cout<<"Roots are real and different"<<endl;
        cout<<"Root1:"<<quad1<<endl;
        cout<<"Root2:"<<quad2<<endl;
    }
    else if(discriminant==0){
        float quad3= -b/(2*a);
        cout<<"Roots are real and equal"<<endl;
        cout<<"Root1=Root2:"<<quad3<<endl;
    }
    else{
        cout<<"Roots are imaginary"<<endl;
    }
    return;
}

int main()
{
    int a,b,c;
    cout<<"Enter the coefficients of a, b & c: ";
    cin>>a>>b>>c;
    quadratic(a,b,c);
    return 0;
}



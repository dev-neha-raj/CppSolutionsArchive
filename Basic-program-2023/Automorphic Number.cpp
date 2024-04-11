#include <bits/stdc++.h>
using namespace std;

bool isAutomorphic(int num){
int p=num*num;
if(p%10 !=num%10){
cout<<"Not Automorphic"<<endl;
return false;
num=num/10;
p=p/10;
}

else{
    cout<<"Automorphic"<<endl;
    return true;
}
}

int main()
{
    int n;
cout<<"Enter the number:";
cin>>n;
isAutomorphic(n);
return 0;
}
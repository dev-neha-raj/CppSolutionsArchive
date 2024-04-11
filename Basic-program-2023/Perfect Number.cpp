#include <iostream>
using namespace std;
bool isPerfect(int num){
int sum=0;
for(int i=1;i<=num-1;i++){
if(num%i==0)
sum=sum+i;
}
if(sum==num){
    return true;
}
else{
    return false;
}
}

int main(){
    int n;
cout<<"Enter the number"<<endl;
cin>>n;
bool ans=isPerfect(n);
if(ans==true){
    cout<<"It is a perfect number"<<endl;
}
else{
    cout<<"It is not a perfect number"<<endl;
}
}

//perfect number- 6=1+2+3
/*There is an error in the current implementation of the isPerfect function. In the if statement that checks whether sum is equal to num, a single equals sign is used instead of two equals signs. This is an assignment operator instead of a comparison operator, which means that the if statement will always evaluate to true. To fix this, we need to replace the single equals sign with two equals signs.*/
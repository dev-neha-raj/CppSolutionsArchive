#include <iostream>
using namespace std;
int fibonacci(int n){
    int fib[n];
    if(n==0){
       return 0;}
        else if(n==1){
            return 1;
        }
        else{
            fib[0]=0;
            fib[1]=1;
            for(int i=2;i<n;i++){
            fib[i]= fib[i-1]+fib[i-2];
            }
        }
    for( int i=0;i<n;i++){
        cout<<fib[i]<<" ";
        cout<<endl;
    }
   return fib[n-1];
   }

int main()
{
    int n;
cout<<"Enter the number of terms:";
cin>>n;
cout<<"The fibonacci number upto "<<n<< " is:"<<fibonacci(n)<<endl;
return 0;
}






/*
fibonacci series..aage ka 2 number sum hai piche ke 2 number ka
pr 0 ke liye 0 hoga aur 1 ke liye one.. 0 1 1 2 3 5 8
so there will be a special condition for that.

*/
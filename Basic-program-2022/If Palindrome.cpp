#include <iostream>
using namespace std;
int reverse(int num){
int rev_num=0;
while(num !=0){
	int mod=num%10;
	rev_num=rev_num*10+mod;
	num=num/10;
}
return rev_num;	
}
int main(){
int num=312   ;
int rev_num=reverse(num);
if(rev_num=num){
	cout<<"Palindrome"<<endl;
}else{
	cout<<"Non-Palindrome"<<endl;
}
}

//to remove all the spaces from the string;
#include<iostream>
using namespace std;
string removeSpace(char str[]){
	int count=0;
	for(int i=0;str[i];i++)
	if(str[i] !=' '){
		str[count]=str[i];
		count++;
	}
str[count] ='\0';
return str;
}
int main(){
	char str[]="If i'll not try my own then atomic mistakes pakad me nhi aaegi";
	cout <<removeSpace(str);
	return 0;
}

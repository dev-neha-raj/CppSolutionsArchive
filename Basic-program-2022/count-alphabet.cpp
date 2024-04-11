//count the number of vowels, constants and spaces in string...
#include <bits/stdc++.h>
using namespace std;
int solve(string str, int length){
	int vowel=0,constant=0,whitespace=0;
	for(int i=0;i<length;i++){
		str[i]=towlower(str[i]);}
		for(int i=0;i<length;i++){
		if(str[i]== 'a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
			vowel++;
		else if (str[i]>='a'&&str[i]<='z')
			constant++;
		else if(str[i]==' ')
		whitespace++;
		}
	cout<<"The number of vowels are: "<<vowel <<"\n";
	cout<<"The number of constants are: "<<constant <<"\n";
	cout<<"The number of white spaces are: "<<whitespace <<"\n";
	
}
int main(){
	string str ="my name is neha raj";
	int length = str.length();
	solve(str,length);
	return 0;	
}

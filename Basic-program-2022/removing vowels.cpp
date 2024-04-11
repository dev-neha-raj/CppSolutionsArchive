//remove all vowels from the string;
#include<bits/stdc++.h>
using namespace std;
removeVowels(string str, int length){
for(int i=0;i<length;i++){
	str[i]=tolower(str[i]);
}
for(int i=0;i<length;i++){
	if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u')
	str[i]=NULL;
}
}
int main(){
	int length;
int x=removeVowels(str,length);
string str="The statement after removing vowels: ";
cout<<"The statement after removing vowels are: "<<x<<endl;

}

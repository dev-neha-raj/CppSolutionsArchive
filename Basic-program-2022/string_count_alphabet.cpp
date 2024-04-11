//to count the number of vowel,consonants & whitespaces;
#include<iostream>
using namespace std;
int find(string str, int length){
	int vowel=0,consonants=0,whitespaces=0;
	for(int i=0;i<length;i++){
		str[i]=towlower(str[i]);
	}
for(int i=0;i<length;i++){
	if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		vowel++;
	else if(str[i]>='a'&& str[i]<='z')
		consonants++;
	else if(str[i]==' ')
		whitespaces++;
	}
	cout <<"vowels: "<<vowel<<endl;
	cout<<"consonants: "<<consonants<<endl;
	cout<<"whitespaces: "<<whitespaces<<endl;
}
int main(){
	string str="my Name is nehA Raj";
    int length=str.length();
    find(str,length);
    return 0;
}

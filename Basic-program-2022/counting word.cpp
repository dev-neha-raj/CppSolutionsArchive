#include<iostream>
#include<sstream>
#include<string>
using namespace std;
//counting words using sstring...
int countWords(string str){
	//breaking words using stringstream..
	stringstream s(str);
	//to store individual words..
	string word;
	int count=1;
	while(s >> word)
	count++;
	return count;
}
int main(){
string s="geeks for a geeks"
         "contribution in coding";
cout<<"Number of words are: "<<countWords(s);
return 0;		
}

//program to print the frequency of the individual words in the string...
#include <bits/stdc++.h>
#include<iostream>
#include<sstream>
#include<string>
using namespace std;
void printFreq(string st){
	map<string,int>freq;
	stringstream ss (st);
	string word;
	while (ss>>word)
	freq[word]++;
	map<string,int>::iterator m;   
	for(m=freq.begin(); m!=freq.end();m++)
	cout<<m->first<<"-->"<< m->second<<"\n";
}
int main(){
	string s="this is the geeks for geeks site i am checking into";
	printFreq(s);
	return 0;
}

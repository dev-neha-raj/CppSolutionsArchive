//to find non-repeating character in string
#include <bits/stdc++.h>
using namespace std;
class solution{
	public:
int findNon_Rep(string &str, int freq[200]){
	int i,j;int len=str.length();
	for(int i=0;i<len;i++){
		if(str[i]==' ')
		continue;
		else
			freq[str[i]-'a']++;}
			for(int i=0;i<len;i++){
		if(freq[str[i]-'a'] ==1 && str[i] !=' '){
			cout<<str[i]<<" ";
		}
		}
	}                                                                                                               	
};
int main(){
	string str="googleisgooglechrome"; int len=str.length();
	int freq[200]={0};
	solution obj;
	cout<<"The non repeating character of the strings are: "<<endl;
	cout<<obj.findNon_Rep(str,freq);
	return 0;
		
}

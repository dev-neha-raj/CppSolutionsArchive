//to find a word in a given string which has the highest number of repeated letters...
#include <bits/stdc++.h>
using namespace std;
class solution{
	public: 
		void highestRepLetters(string &str){
			int len=str.length();
			int maxWord=0;
			int curr_maxWord=0;
			string result=" ";
			for(int left=0;left<len;){
				int right=left+1;
				while(str[right]!=' ' && right<len){
					right++;
				}
				int freq[26]={0};
				curr_maxWord=0;
				for(int index=left;index<right;index++){
					freq[str[index]-'a']++;
				}
				for(int index=0;index<26;index++){
					if(freq[index]>1){
						curr_maxWord++;
					}
				}
				if(curr_maxWord>maxWord){
					maxWord=curr_maxWord;
					result=" ";
					for(int j=left;j<right;j++)
					result +=str[j];
				}
				left=right+1;
			}
			if(result.empty()){
				cout<<"-1";
			}
			else{
				cout<<"Word with the highest number of repeated letters: ";
				cout<<result <<"\n";
			}    			
		}
};
int main(){
	string str="google facceebook amazon";
	solution obj;
	obj.highestRepLetters(str);
	return 0;
}









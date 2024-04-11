//non repeating character in the string...
#include<bits/stdc++.h>
using namespace std;
class solution{
	public:
		int non_rep(string &st, int freq[200]){
			int i,j;
			int l=st.length();
			for(int i=0;i<l;i++){
				freq[i]=1;
				for(int j=i+1;j<l;j++){
					if(st[i]==st[j]){
						freq[i]++;
						st[j]='-';
					}
				}
			}
			for(int i=0;i<l;++i){
				if(freq[i]==l && st[i]!=' ' && st[i] !='-'){
					cout<<st[i]<<" ";
				}
			}
		}
};
int main(){
	string st="takemebby";
	int l=st.length();
	int freq[200]={0};
	solution obj;
	cout<<"Non Repeating characters: "<<"\n";
	obj.non_rep(st,freq);
	return 0;
	}

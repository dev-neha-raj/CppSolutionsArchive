#include <bits/stdc++.h>
using namespace std;

void printFreq(string str){
    char ch=str[0];
    int count=1;
    for(int i=1;i<str.length();i++){
        if(str[i]==ch){
        count++;
        }           
        else{
            cout<<ch<<"->"<<count<<endl;
            count=1;
            ch=str[i];
        }
    }
    cout<<ch<<count<<" ";
}

int main(){ 
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    printFreq(str);
    return 0;
}

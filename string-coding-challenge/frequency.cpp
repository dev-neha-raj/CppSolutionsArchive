#include <bits/stdc++.h>
using namespace std;

void frequency(string str){  
    int count=0;
    for(int i=0;i<str.length();i++){
        for(int j=i+1;j<str.length();j++){
            if(j<i && str[i]==str[j]){
                break;
            }
            if(str[i]==str[j]){
                count++;       
            } 
        }
        cout<<str[i]<<"-->"<<count<<endl;
        count = 0; // reset the count for the next character
    }
}

int main(){ 
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    frequency(str);
    return 0;
}

/*
frequency of character in the string.

t- 1
a-2
k-1
so on..

*/
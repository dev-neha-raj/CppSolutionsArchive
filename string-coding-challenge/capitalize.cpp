#include <bits/stdc++.h>
using namespace std;
//take you forward.
string capitalize(string str){
for(int i=0;i<str.length();i++){ 
    if(i==0 || i==str.length()-1){
    str[i]=toupper(str[i]);   
    }
    else if(str[i]==' '){
        str[i-1]=toupper(str[i-1]);
        str[i+1]=toupper(str[i+1]);
    }
}  
return str;
}
 
int main(){
string str;
cout<<"Enter the string :";
getline(cin,str);
cout<<capitalize(str);
    return 0;
}

/*
Returning the garbage value after printing the output
reason:
The function capitalize is not returning any value, but it is printing the capitalized string to the console using cout. Therefore, when the function is called from main using cout<<capitalize(str), it is printing the capitalized string as expected, but it is also printing the garbage value returned by the capitalize function, which is void (i.e., it does not have a return value).
*/
//to remove all the character from the string accept alpabet,,
//#,@,$,&,*,!,%,^
#include <bits/stdc++.h>
using namespace std;
string removeChar(string str, int len){
string  ans;
for(int i=0;i<len;i++){
int ascii=(int)str[i];
if((ascii>=65 && ascii<=90)||(ascii>=97 && ascii <=122))
ans.push_back(str[i]);}
return ans;
}

int main(){
string str="letmetakeit%^&*%$#whatthefu**k";
int n= str.length();
cout<<"The resultant string: ";
cout<<removeChar(str,n) <<"\n";
return 0;
}

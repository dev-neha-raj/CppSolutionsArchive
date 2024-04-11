#include <bits/stdc++.h>
using namespace std;
class solution{
    public:
void nonRepeating(string& str, int freq[200]) {
    int i, j;
    for (i = 0; i < str.length(); i++) {
        if (str[i] == ' ') continue;
        freq[str[i]]++;
    }
    for (i = 0; i < str.length(); i++) {
        if (str[i] == ' ') continue;
        if (freq[str[i]] == 1) {
            cout << str[i] << " ";
            freq[str[i]] = -1; // mark it as visited
        }
    }
}
};

int main()
{ 
    string str;
cout<<"Enter the string :";
getline(cin,str);
int l=str.length();
int freq[200]={0};
solution obj;
cout<<"Non repeating characters are: ";
obj.nonRepeating(str,freq);
    return 0;
}

//void does not have a return type so cannot print the return type of a void function.




































/*
//gogle-ole
non repeating character in the string..
gogle-o l e
traverse the loop
2 for loop will be there..where each iteration will be checked against..out for loop
str[i] mtlb str[0]=g str[1]=o str[2]=g str[3]=l str[4]=e 
if str[i]!=str[j]
cout<<str[i];
//google=
    googlo              //g->o, o, l ,o
                  //o->g,g,l,e
                  //o->g,g,l,e
                  //g->o,o,l,e
                  //l->g,g,o,o,e
                  //e->g,o,g,l
i can see there are so many repeating characters..
what to do?
condition laga sakte hai ki while iterating the loop if the outer and inner loop 
see the same character then ignore it..
how to write the condition for preventing writing the same repeated character
*/
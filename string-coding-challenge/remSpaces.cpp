#include <bits/stdc++.h>
using namespace std;
string remSpaces(char str[]){
    int count=0;
    for(int i=0;i<str[i];i++){
        if(str[i]!=' '){ //take you forward
         str[count]=str[i];
         count++;
        }  
    }
     str[count]='\0';
     return str;
}
int main()
{ 
char str[]="Take you forward";
cout<<remSpaces(str);
    return 0;
}

/*
Declare a variable count to keep track of the current position in the modified string.
Iterate over the characters in the input string using a for loop and an index variable i.
For each character, check if it is not a space character using the condition if (str[i] != ' ').
If the character is not a space, copy it to the countth position in the modified string using the assignment statement str[count] = str[i], and increment count.
After iterating over all the characters in the input string, add a null character ('\0') at the countth position in the modified string to terminate the string.
Return the modified string.
In the main function, a character array str is declared and initialized with the string "Take you forward". The remSpaces function is called with str as the argument, and the result is printed to the console using the cout statement.

Overall, the remSpaces function is a simple and effective way to remove spaces from a C-style string in C++. However, note that it modifies the input string in place, which may not always be desirable depending on the context. Additionally, if the input string contains non-space whitespace characters like tabs or newline characters, those characters will not be removed by this function.
*/
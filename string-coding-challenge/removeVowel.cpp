// Write a c++ program to remove vowels from a given string.
#include <bits/stdc++.h>    
using namespace std;
string remVowel(string s){
for(int i=0;i<s.length();i++){
s[i]=tolower(s[i]);
}
for(int i=0;i<s.length();i++){
    if(s[i]=='a'||s[i]=='e' ||s[i]=='i'||s[i]=='o'||s[i]=='u'){
		s=s.substr(0,i) + s.substr(i+1);
		i--;
	}     
}
return s;
} 
int main(){
	string str="take you forward";
	cout<<"Output:"<<remVowel(str)<<endl;
	return 0;
}
/*
for(int i=0;i<s.length();i++){
    if(s[i]=='a'||s[i]=='e' ||s[i]=='i'||s[i]=='o'||s[i]=='u'){
		s=s.substr(0,i) + s.substr(i+1);
		i--;
	}     
}
*/

// This for loop is used to remove vowels from the input string s. It iterates through each character in the string, and if a vowel (either lowercase or uppercase) is found at index i, it removes the vowel by using the substr() function to create a new string with the characters before and after the vowel, and concatenating them together.

// The if statement checks if the current character at index i is a vowel by comparing it to the characters 'a', 'e', 'i', 'o', and 'u'. If a vowel is found, the following steps are taken:

// The substr() function is used to create a new string with the characters before the vowel. This is done by calling s.substr(0, i), which extracts the substring from the beginning of the string up to but not including the vowel character.

// The substr() function is called again to create a new string with the characters after the vowel. This is done by calling s.substr(i + 1), which extracts the substring starting at the character after the vowel.

// The two substrings are concatenated together using the + operator, creating a new string with the vowel removed.

// The resulting string is assigned back to the s variable, effectively removing the vowel from the original string.

// Finally, the i variable is decremented by 1 so that the loop checks the next character in the modified string (since the current character has been removed).

// By decrementing i at the end of the loop, the loop will continue to check characters in the modified string, even if the current character has been removed. This is necessary to ensure that all vowels are removed from the string.
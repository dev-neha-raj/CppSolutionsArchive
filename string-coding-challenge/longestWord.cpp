#include<bits/stdc++.h>
using namespace std;

void MaxLengthWords(string str, string &maxWord)
{
       int len = str.length();
       int i = 0, j = 0;


       int min_length = len, max_length = 0, max_start = 0;


       while (j <= len)
       {
              if (j < len && str[j] != ' ')
                     j++;

              else
              {
                     int curr_length = j - i;

                     if (curr_length > max_length)
                     {
                            max_length = curr_length;
                            max_start = i;
                     }
                     j++;
                     i = j;
              }
       }

       maxWord = str.substr(max_start, max_length);
}

// Driver code
int main()
{
       string str = "Google Docs paradox";
       string maxWord;
       MaxLengthWords(str, maxWord);


       cout << "Largest Word is: " << maxWord << endl;
}
/*
to find the longest word in the string
input- 'google docs paradox'
output-paradox
take 2 string one will iterate through entire string 
and other string will store the words 
phir loop run karungi..space tak.
aur current_word me wo word ka length store kar dungi..
phir aage iterate karungi aur current_word se ye naya word ko compare karungi agar ye 
word bada hai then current_word me ye store ho jaega..
once the loop ends it will print this current_word.

*/
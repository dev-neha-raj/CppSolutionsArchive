#include <bits/stdc++.h>
using namespace std;
int sum(string s) {
  int sum = 0;
  string temp = "";
  for (int i = 0; i < s.length(); i++) {
    if (s[i] >= '0' && s[i] <= '9') {
      temp += s[i];
    } else {
      if (temp != "") {
        sum += stoi(temp);
        temp = "";
      }
    }
  }
  if (temp != "") {
    sum += stoi(temp);
  }
  return sum;
}

int main()
{    
string str;
cout<<"Enter the string :";
getline(cin,str);
cout<<sum(str);
    return 0;
}
// s=1xyz23
// In the sum() function, you are declaring a variable sum without initializing it, and then attempting to add stoi(s) to it. This will result in undefined behavior because sum can contain any random value.

// You are using the variable temp to store a space character, but you are not actually using it for anything else. It seems like you intended to use it to reset the value of temp to an empty string, but you are assigning a space character to it instead.

// In the sum() function, you are returning a sum as a string, but the function signature says it should return a string. You should either change the function to return an int or convert the int sum to a string before returning it.

// In the main() function, you are not calling the sum() function at all.
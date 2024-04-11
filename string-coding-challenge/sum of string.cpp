
#include <iostream>
#include <string>

using namespace std;

int sum(string s) {
  int sum = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] >= '0' && s[i] <= '9') {
      string temp = "";
      while (i < s.length() && s[i] >= '0' && s[i] <= '9') {
        temp += s[i];
        i++;
      }
      sum += stoi(temp);
    }
  }
  return sum;
}

int main() {
  string str;
  cout << "Enter the string: ";
  getline(cin, str);
  cout << "Sum of numbers in the string: " << sum(str) << endl;
  return 0;
}
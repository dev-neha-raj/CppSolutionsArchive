#include <iostream>
#include <algorithm>
#include <string>

void freqMap(char str[], int n) {
    std::sort(str, str + n);
    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i < n - 1 && str[i] == str[i + 1]) {
            i++;
            count++;
        }
        std::cout << str[i] << "-->" << count << std::endl;
    }
}

int main() {
    std::string input;
    std::cout << "Enter the string: ";
    std::getline(std::cin, input);
    char* str = new char[input.length() + 1];
    std::strcpy(str, input.c_str());
    int n = std::strlen(str);
    freqMap(str, n);
    delete[] str;
    return 0;
}

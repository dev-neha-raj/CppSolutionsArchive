#include <bits/stdc++.h>
using namespace std;

int replace(int num) {
    int temp = num;
    int count = 1;
    while (temp != 0) {
        int digit = temp % 10;
        if (digit == 0) {
            num = num + (1 - 0) * count;
        }
        temp = temp / 10;
        count = count * 10;
    }
    return num;
}

int main() { 
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The modified number is: " << replace(n) << endl;
    return 0;
}

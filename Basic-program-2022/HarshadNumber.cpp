#include <iostream>
using namespace std;
int sum_of_digits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum = sum + digit;
        n /= 10;
    }
    return sum;
}

bool isHarshadNumber(int n)
{
    int sum = sum_of_digits(n);
    return (n % sum == 0);
}
int main()
{
    int n;
    cout << "Enter the positive Integer" << endl;
    cin >> n;
    if (isHarshadNumber(n))
    {
        cout << n << " is Harshad number" << endl;
    }
    else
    {
        cout << n << " is not a Harshad number" << endl;
    }
    return 0;
}

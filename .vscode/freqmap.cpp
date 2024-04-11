#include <bits/stdc++.h>
using namespace std;

void freqMap(char str[], int n) {
    sort(str, str + n);
    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i < n - 1 && str[i] == str[i + 1]) {
            i++;
            count++;
        }
        cout << str[i] << "-->" << count << endl;
    }
}

int main() {
    char str[100];
    cout << "Enter the string: ";
    getline(cin, str);
    int n = strlen(str);
    freqMap(str, n);
    return 0;
}








// #include <bits/stdc++.h>
// using namespace std;

// freqMap(char str[], int n){
// sort(str,str+n);
// for(int i=0;i<n;i++){
//     int count=1;
//     while(i<n-1 && str[i]==str[i+1]){
//         i++;
//         count++;
//     }
// cout<<str[i]<<"-->"<<count<<endl;
// }

// }
// int main()
// { 
//    char str[100];
//     int n= sizeof(str)/sizeof(str[0]);
// cout<<"Enter the string :";
// getline(cin,str[100]);
// freqMap(str,n)
//     return 0;
// }
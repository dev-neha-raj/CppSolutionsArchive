//frequency of each element...
#include <iostream>
using namespace std;
int main()
{
int freq[100];
int size, i, j, count;
cout <<"Enter size of array:";
cin >> size;
int arr[size];
cout << "Enter elements in array: ";
for(i=0; i<size; i++)
{
cin >> arr[i];
freq[i] = -1;
}
for(i=0; i<size; i++)
{
count = 1;
for(j=i+1; j<size; j++)
{
if(arr[i]==arr[j])
{
count++;
freq[j] = 0;// 12,13,14,14,12,15
}
}
if(freq[i] != 0)
{
freq[i]= count;
}
}
cout << "Frequency of all elements of array :";
for(i=0; i<size; i++)
{
if(freq[i] != 0)
{
cout << arr[i] <<"->" << freq[i]<<endl;
}
}
}

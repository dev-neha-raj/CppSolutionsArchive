//reversing the string two pointers...
#include <bits/stdc++.h>
using namespace std;
void swap(string  a,int i,int j){
	char temp=a[i];
	a[i]=a[j];
	a[j]=temp;	
}

void reversestr(string a){
	int i=0;
	int j=a.length()-1;
	while(i<j){
		swap(a,i,j);
		i++;
		j--;
	}	
}
//a[i],a[n-i-1]

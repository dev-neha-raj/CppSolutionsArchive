//even or odd numbers in range...
#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the value:"<<endl;
	cin>>n;
    for(int i=1;i<=n;i++)
	if(n%i==0){
	cout<<"Even number"<<endl;	
	}
	else{
	cout<<"Odd number"<<endl;	
	}	
}
//loop chal rha hai, har baar n value tak ke liye.,
//but mujhe individual value janna hai ki even h ya nhi, range nhi
//ki ye even hai ye odd hai...

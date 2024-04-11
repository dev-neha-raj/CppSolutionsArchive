//sum of numbers in a string...
#include <iostream>
using namespace std;
// 12dsn123sj11=12+123+11=146
class solution{
	public:
		int sumOfInt(string str, int n){
			string tempSum=" ";
			int sum=0; int atoi;
			for(int i=0;i<n;i++){
				if(str[i]>='0' && str[i]<='9'){
					tempSum += str[i];
				}
				else{
					sum += atoi(tempSum.c_str());
				}
				tempSum =" ";
			}
		}
	return sum+atoi(tempSum.c_str())};

int main(){
	string str="1s3oz67";
	int n=str.length();
	solution obj;
	cout<<"sum";
	cout<<obj.sumOfInt(str,n);
	return 0;
}






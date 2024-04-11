//to find substring within the string using STL...
#include <iostream>
using namespace std;
int main(){
	string text="takeyouforward";
	string pattern="forward";
    auto int foundIdx=text.find(pattern);
	cout<<"The substring start from the index: "<<foundIdx <<endl;
	return 0;
}

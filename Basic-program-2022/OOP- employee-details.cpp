#include<iostream>
using namespace std;
class Employee{
//attributes kya h:name,company,age,isi ko attributes bolte hai...
public:
string Name;
string Company;
int Age;
//Introduction is a method of class..method 
void Introduction(){
	cout<<"Name- "<<Name<<endl;
	cout<<"Company- "<<Company<<endl;
	cout<<"Age- "<<Age <<endl;
}

Employee(string name,string company,int age){
Name=name;
Company=company;
Age=age;	
}
};
int main(){
//Employee employee1,employee2;	
//by default private h, isiliye nhi access
//kr sakte..toh??
/*Access  modifiers..
private
public 
protected..
*/
Employee emp1=Employee("Nehaa","xyz",22);
Employee emp2=Employee("Rohan","Default",24);
/*employee1.Name="Neha";
employee1.Company="zero Miles";
employee1.Age=22;*/
emp1.Introduction();
cout<<endl;
/*employee2.Name="John";
employee2.Company="Amazon";
employee2.Age=24;*/
emp2.Introduction();

//concept:default constructor->In case we don't create our constructor our compiler automatically generate a constructor called default constructor...
//constructor is a method(function)...but but it doesn't have a return type...mtlb age void ya int likhne ka jurarat nhi hai, like any other functions.
//constructor has the same name of the class that it belongs to. ex: the constructor of the class Employee will be called Employee only..
//constructor should be public...

}

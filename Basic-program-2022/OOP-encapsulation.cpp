//concept-Encapsualation.
/*
The main idea behind encapsualation.,is to bind together the data and the methods,that operate on that data so that they
are grouped together within a class.

but why do we do this??
we do this with the purpose of preventing anyone or anything outside of our class to be able to directly access or modify the data.
i want to specify a certain way to access those data,like someone with those specific methods can provoke and access that data..
let's see how we do that..
it is usually done with the help of two methods,
those are getters and setters..
*/
#include<iostream>
using namespace std;
class Employee{
private:
string Name;
string Company;
int Age;	
public:
	void setName(string name){
		Name=name;
	}
	string getName(){
		return Name;
	}
	
	void setCompany(string company){
		Company=company;
	}
	string getCompany(){
		return Company;
	}
	
	void setAge(int age){
		if(age>=18)
		Age=age;
	}
	int getAge(){
		return Age;
	}
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
cout<<endl;
emp1.setName("Nehaa");
emp1.setAge(15);
emp1.setCompany("Amazon");
cout<<"Hi,This is "<<emp1.getName()<<".I am "<<emp1.getAge()<<" years old"<<" working in "<<emp1.getCompany();
}

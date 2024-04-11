//Concept:Abstraction
/*
Abstraction means hiding those complex procedure..

*/ 
//the process of creating that contraction for the complex data is done with the help of the class called.,abstract class..
//let's create it from line 10;
#include<iostream>
using namespace std;
class AbstractEmployee{
	//method
   virtual void AskForPromotion()=0;
};
class Employee:AbstractEmployee{
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
void AskForPromotion(){
	if(Age>30)
	cout<< Name <<" got promoted!"<<endl;
	else
	cout<<Name <<" sorry NO promotion for you!"<<endl;
}
};
int main(){
Employee emp1=Employee("Nehaa","xyz",32);
Employee emp2=Employee("Rohan","Default",24);
emp1.AskForPromotion();
emp2.AskForPromotion();
}

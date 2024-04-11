/*
concept:Polymorphism...
means many forms
The most common use of polymorphism is when a parent class
reference is used to refer to a child class object

*/
#include<iostream>
using namespace std;
class AbstractEmployee{
   virtual void AskForPromotion()=0;
};
class Employee:AbstractEmployee{
private:
string Company;
int Age;
protected:
string Name;	
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
virtual void Work(){
	cout<<Name<<" is checking email, task backlog "<<endl;
}
};
//this is a child class..it has all the property of it's parent class,i.e.,Employee..
class Developer:public Employee{
public:	
	string FavProgrammingLanguage;
	
Developer(string name,string company,int age,string language)
:Employee(name,company,age){
	FavProgrammingLanguage=language;
}
void FixBug(){
cout<<Name <<" is fixing bug using "<<	FavProgrammingLanguage <<endl;

}void Work(){
cout<<Name<<" is tracing bugs in "<<FavProgrammingLanguage<<endl;}	
};

class Teacher:public Employee{
public:	
string Subject;
     void PrepareLesson(){
     	cout<<Name<<" is preparing "<<Subject<<" lesson"<<endl;
	 }
	Teacher(string name,string company,int age,string subject):Employee(name,company,age){
	Subject=subject;	
	}
	void Work(){
	cout<<Name<<" is teaching "<< Subject<<endl;
	}
};

int main(){
Developer d=Developer("Nehaa","xyz",32,"python");
Teacher t=Teacher("John","Cool",34,"History");
Employee* e1=&d;
Employee* e2=&t;

e1->Work();
e2->Work();

}


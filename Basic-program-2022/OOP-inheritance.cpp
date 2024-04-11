//Concept:Inheritance...
/*
There is this parent class(base class)...and the derived class. 
*/
#include<iostream>
using namespace std;
class AbstractEmployee{
	//method
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

}	
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
};

int main(){
Developer d=Developer("Nehaa","xyz",32,"python");
d.FixBug();
d.AskForPromotion();
Teacher t=Teacher("John","Cool",34,"History");
t.PrepareLesson();
t.AskForPromotion();
}

//Take a deep breathe...
/*
so much of concept has used here..let's revise
first,the class has created..

second, paying attention to the use of public,protected,private classes..since, by default it is private we won't be able to access
it in main function.we need to declare it public.

third,we need a constructor(create it properly)beneath the end of curly braces,,and before "};"
we have a default constructor, but here in inheretence since,we have access all the properties of employee,and it has a constructor,
we loose our default constructor..

#//take a note on the proper use of the attributes and methods,and parameters,and how they are implementing..
take a note on how object is creating in main functions...and how we are calling it.. 

*/

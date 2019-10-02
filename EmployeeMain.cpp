#include<iostream>
#include"SalaryAccount.cpp"
#include<string>
using namespace std;
class Employee
{
	private:
		string EmpId;
		string EmpName;
		string Dept;
		SalaryAccount SalAcc; //Association
	public:
		Employee(){} //Default Constructor
		Employee(string empid, string empname, string dept):SalAcc(11111,"Saving Account","01/02/2015","BOI","BX111")
		{//Parametrized Contructor
			EmpId = empid;
			EmpName = empname;
			Dept=dept;
		}
		void Accept()//Accept Function for accepting employees details
		{
			cout<<"\n Enter Employee Details "<<endl;
			cout<<"Enter EmpID: "<<endl;
			cin>>EmpId;
			cout<<"Enter Employee Name: "<<endl;
			cin>>EmpName;
			cout<<"Enter Department: "<<endl;
			cin>>Dept;
			cout<<"\nEnter Emplyees Bank Details "<<endl;
			SalAcc.Accept(); //Accepting Bank Details
		}
		void Display()//Display Function for displaying employees details
		{
			cout<<"\nEmployees's Data with Bank Account Details "<<endl;
			cout<<"\nEmployee ID: "<<EmpId<<endl;
			cout<<"\nEmployee Name: "<<EmpName<<endl;
			cout<<"\nEmployee Department: "<<Dept<<endl;
			SalAcc.Display(); //Displaying Bank Details
			
		}
		
		

};
int main()
{
	Employee e1("1212","Vikas","Techical");
	e1.Display();
	Employee e2;
	Employee e3;
	e2.Accept();
	e3.Accept();
	e2.Display();
	e3.Display();
return 0;
}

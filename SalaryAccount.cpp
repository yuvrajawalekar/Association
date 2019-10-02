#include<iostream>
#include<string>
using namespace std;
class SalaryAccount
{
	private:
		int AccountNo;
		string AccountName;
		string OpeningDate;
		string BankName;
		string IFSCCode;
	public:
		SalaryAccount()//Default Contructor
		{
			AccountNo=10000;
			AccountName="ABC";
			OpeningDate="31/03/2018";
			BankName="BOI";
			IFSCCode="BX000";
		}
		SalaryAccount(int acn,string acname, string od,string bname,string ifsc)//Paramterized Contructor
		{
			AccountNo=acn;
			AccountName=acname;
			OpeningDate=od;
			BankName=bname;
			IFSCCode=ifsc;
		}
		void Accept()
		{
			cout<<"\nEnter Account Number: "<<endl;
			cin>>AccountNo;
			cout<<"\nEnter Account Name: "<<endl;
			cin>>AccountName;
			cout<<"\nEnter Opening Date is dd/mm/yyyy format: "<<endl;
			cin>>OpeningDate;
			cout<<"\nEnter Bank Name: "<<endl;
			cin>>BankName;
			cout<<"\nEnter IFSC Code: "<<endl;
			cin>>IFSCCode;
		}
		void Display()
		{
			cout<<"\nAccount Number: "<<AccountNo<<endl;
			cout<<"\nAccount Name: "<<AccountName<<endl;
			cout<<"\nOpening Date: "<<OpeningDate<<endl;
			cout<<"\nBank Name: "<<BankName<<endl;
			cout<<"\nIFSC Code: "<<IFSCCode<<endl;
		
		}
		
};

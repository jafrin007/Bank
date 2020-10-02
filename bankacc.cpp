#include<iostream>
using namespace std;
class bankacc
{
	private:
	char name[20],type[20];
	int accno;
	float bal;
	public:
	void assign();
	void deposit();
	void withdrawal();
	void display();
}obj1;
int main()
{
    int ch,n;n=0;
	obj1.assign();
	cout<<"Enter 1 for deposit,2 for withdrawal,3 for checking balance\n";
	cin>>ch;
	do
	{
	switch(ch)
	{
		case 1:
			obj1.deposit();
			obj1.display();
			cout<<"Enter 1 to continue and 0 to exit"<<endl;
			cin>>n;
			break;
		case 2:
			obj1.withdrawal();
			obj1.display();
			cout<<"Enter 1 to continue and 0 to exit"<<endl;
			cin>>n;
			break;
		case 3:
			obj1.display();
			cout<<"Enter 1 to continue and 0 to exit"<<endl;
			cin>>n;
			break;
		default:
			cout<<"WRONG CHOICE\n";
			cout<<"Enter 1 to continue and 0 to exit"<<endl;
			cin>>n;
	    }
    }while(n!=0);
}
void bankacc::assign()
{
	cout<<"Enter the name\n";
	cin>>name;
	cout<<"Enter the account type\n";
	cin>>type;
	cout<<"Enter the account number\n";
	cin>>accno;
	cout<<"Enter the account balance\n";
	cin>>bal;
}
void bankacc::deposit()
{
	float d_amount;
	cout<<"Enter the amount to be withdrawn\n";
	cin>>d_amount;
	bal=bal+d_amount;	
}
void bankacc::withdrawal()
{
	float w_amount;
	cout<<"Account Balance : "<<bal<<endl;
	cout<<"Enter the amount to be withdrawn\n";
	cin>>w_amount;
	if(w_amount>(bal-1000))
	cout<<"Insuffient Balance\n";
	else
	bal=bal-w_amount;
}
void bankacc::display()
{
	cout<<"Name            : "<<name<<endl;
	cout<<"Account Balance : "<<bal;
	
}


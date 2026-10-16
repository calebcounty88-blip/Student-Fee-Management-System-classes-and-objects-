#include <iostream>
using namespace std;
class Student{
	public:
		string student_name,admission_number;
		float fee_balance,amount;
		void inputStudent(){
			cout<<"Student Name"<<endl;
			cin>>student_name;
			cout<<"Admission Number"<<endl;
			cin>>admission_number;
			cout<<"Fee Balance"<<endl;
			cin>>fee_balance;
		}
		void makePayment(){
			if(amount<0)
			{
				cout<<"Insert a positive number"<<endl;
			}
			if(amount>fee_balance){
				cout<<"you owe"<<endl;
				fee_balance=0;
			}
			if(amount>0)
			{
				fee_balance--;
				cout<<"Paid successful"<<endl;
			}
			else{
				fee_balance=fee_balance-amount;
				cout<<"Fee Balance Remaining"<<endl;
			}
		}
		void displayStatus(){
			cout<<"\n===Fee Processing Results==="<<endl;
			cout<<"Student Name"<<student_name<<endl;
			cout<<"Admission Number"<<admission_number<<endl;
			cout<<"Fee Balance"<<fee_balance<<endl;
		}
		
};
int main()
{
	Student Student1;
	Student1.inputStudent();
	Student1.makePayment();
Student1.displayStatus();
	return 0;
}
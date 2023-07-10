#include<iostream>
#include<iomanip>
using namespace std;

struct PayRoll{
    string empName;
    int emPNumber;
    double hours;
    double payRate;
    double GrossPay;
};



int main(){
    

    PayRoll employee;
    
    cout<<setw(50)<<"Welcome to NYOKONG SUPERMARKET"<<endl;
    cout<<endl;


    cout<<"Enter the employee name: ";
    cin>>employee.empName;

    cout<<"Enter the employee number: ";
    cin>>employee.emPNumber;

    cout<<"How many hours did the employee work: ";
    cin>>employee.hours;

    cout<<"What was the employee's hourly rate: ";
    cin>>employee.payRate;

    employee.GrossPay= employee.hours*employee.payRate;

    cout<<endl;

    cout<<setw(50)<<"HERE IS THE EMPLOYEE'S DATA"<<endl;

    cout<<endl;

    cout<<"Employee's name is: "<<employee.empName<<endl;
    cout<<"Employee's Number is: "<<employee.emPNumber<<endl;
    cout<<"Employee worked for : "<<employee.hours<<" hours"<<endl;
    cout<<"Employee's PayRate is: "<<" R "<<employee.payRate<<" Per hour"<<endl;
    cout<<"Employee's Gross Pay is: "<<" R "<<employee.GrossPay<<endl;
    
return 0;

}
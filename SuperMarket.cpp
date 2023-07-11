#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct PayRoll{
    string empName;
    int emPNumber;
    string empPosition;
    double hours;
    double payRate;
    double GrossPay;
};

void employees(){
        PayRoll employee;
        char Y;
    
    cout<<setw(60)<<"Do you want to use the Employee GrossPay Calculator: "<<endl;
    cin>>Y;
while(Y == 'Y') { 
    cout<<setw(50)<<"Welcome to NYOKONG SUPERMARKET"<<endl;
    cout<<endl;


    cout<<"Enter the employee name: ";
    cin>>employee.empName;
    cout<<endl;

    cout<<"Enter the employee number: ";
    cin>>employee.emPNumber;
    cout<<endl;

    cout<<"What is the employees's position: ";
    cin>>employee.empPosition;
    cout<<endl;

    cout<<"How many hours did the employee work: ";
    cin>>employee.hours;
    cout<<endl;

    cout<<"What was the employee's hourly rate: ";
    cin>>employee.payRate;
    cout<<endl;

    employee.GrossPay= employee.hours*employee.payRate;

    cout<<endl;

    cout<<setw(50)<<"HERE IS THE EMPLOYEE'S DATA"<<endl;

    cout<<endl;

    cout<<"Employee's name is: "<<employee.empName<<endl;
    cout<<"Employee's Number is: "<<employee.emPNumber<<endl;
    cout<<"Employee's Position is: "<<employee.empPosition<<endl;
    cout<<"Employee worked for : "<<employee.hours<<" hours"<<endl;
    cout<<"Employee's PayRate is: "<<" R "<<employee.payRate<<" Per hour"<<endl;
    cout<<"Employee's Gross Pay is: "<<" R "<<employee.GrossPay<<endl;
    
}
}

int main(){
    
employees();

return 0;

}
#include<iostream>
using namespace std;
int main(){
    int net_salary,basic_salary,allowance_percent,deduction_percent;
    cout<<"Enter the basic_salary: ";
    cin>>basic_salary;
    cout<<"Enter the allowance_percent: ";
    cin>>allowance_percent;
    cout<<"Enter the deduction_percent: ";
    cin>>deduction_percent;

    net_salary = basic_salary + (basic_salary*allowance_percent)/100 - (basic_salary*deduction_percent)/100;
    cout<<"The net salary of the employee is: "<<net_salary;
    return 0;
}
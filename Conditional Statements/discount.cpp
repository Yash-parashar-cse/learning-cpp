#include<iostream>
using namespace std;
int main(){
    int bill_amount;
    float discount,discounted_amount;

    cout<<"Enter your bill amount: ";
    cin>>bill_amount;
    if(bill_amount<100){
        cout<<"No discount for you\n";
        discounted_amount = bill_amount;
        cout<<"amount after diiscount is "<<discounted_amount;
    }
    if(bill_amount>=100 && bill_amount<500){
        cout<<"There is a 10% discount for you\n";
        discount = bill_amount/10;
        cout<<"Discount is:"<<discount;
        discounted_amount = bill_amount - (bill_amount/10);
        cout<<"\nAmount after discount is: "<<discounted_amount;

    }
     if(bill_amount>=500){
        cout<<"There is a 20% discount for you\n";
        discount = bill_amount/5;
        cout<<"Discount is:\n"<<discount;
        discounted_amount = bill_amount - (bill_amount/5);
        cout<<"\nAmount after discount is: "<<discounted_amount;

    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    cout<<"Menu\n";
    cout<<"1. Add\n" <<"2. Subtract\n" <<"3. Multiply\n" <<"4. Divide\n";
    int a,b,c;
    cout<<"Enter the two numbers:\n";
    cin>>a>>b;
    int choice;
    cout<<"Enter your choice:\n";
    cin>>choice;
    switch(choice){
        case 1: c=a+b;
        break;
        case 2: c=a-b;
        break;
        case 3: c= a*b;
        break;
        case 4: c= a/b;
        break;
    }
    cout<<"The result is: "<<c;
    return 0;
}
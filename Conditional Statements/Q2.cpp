#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c,d,r1,r2;
    cout<<"Enter values of a,b and c:";
    cin>>a>>b>>c;
    d=(b*b) -(4*a*c);
    if(d==0){
        cout<<"The roots are real and equal";
        cout<<-b/(2*a);
    }
    else if(d>0){
        cout<<"The roots are real but not equal";
        cout<<endl<<(b*b-sqrt(b*b - 4*a*c))/(2*a);
        cout<<endl<<(b*b-sqrt(b*b + 4*a*c))/(2*a);
    }
    else{
        cout<<"Roots are imaginary";
    }
    return 0;
}
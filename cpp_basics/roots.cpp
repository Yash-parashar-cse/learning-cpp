#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    float r1,r2;
    cout<<"Enter a,b,c:";
    cin>>a>>b>>c;

    r1 =(-b + sqrt(b*b - 4*a*c))/(2*a);
    r1 =(-b - sqrt(b*b - 4*a*c))/(2*a);

    cout<<"The roots are: "<<r1<<" "<<r2;
    return 0;
}
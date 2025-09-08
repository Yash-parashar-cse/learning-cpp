#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter the number: ";
    cin>>num;
    int copy = num;
    int remainder;
    while(copy>0){
        remainder = copy%10;
        copy= copy/ 10;
        sum+= (remainder*remainder*remainder);
    }
    if(sum == num){
        cout<<num<<" is an armstrong number";
    }
    else{
        cout<<num<<" is not an armstrong number";
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int num,rem,rev=0;
    cout<<"Enter the number:";
    cin>>num;
    int copy = num;
    while(copy!=0){
        rem = copy%10;
        copy = copy/10;
        rev = rev*0 + rem;
    }
    if(rev==num){
        cout<<num<<" is a palindrome number.";
    }
    else{
        cout<<num<<" is not a palindrome number.";
    }

    return 0;
}
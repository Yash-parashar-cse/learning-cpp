#include<iostream>
using namespace std;
int main(){
    int n;
    float A[100],sum=0.0 ,average;
    cout<<"Enter the number of elements:";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<". Enter number: ";
        cin>>A[i];
        sum+=A[i];
    }
    average = sum/n;
    cout<<"Average is: "<<average;

    return 0;
}
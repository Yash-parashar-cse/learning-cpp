// Input Format: N = 6
// Result:   
// *          *
// **        **
// ***      ***
// ****    ****
// *****  *****
// ************
// *****  *****
// ****    ****
// ***      ***
// **        **
// *          *

#include<iostream>
using namespace std;
void pattern20(int n){
    // For upper half..
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*(n-i-1);j++){
            cout<<" ";
        }
        for(int l=0;l<=i;l++){
            cout<<"*";
        }cout<<endl;
    }
    // For lower half..
    for(int i=1;i<n;i++){
        for(int j=0;j<(n-i);j++){
            cout<<"*";
        }
        for(int k=1;k<=(2*i);k++){
            cout<<" ";
        }
        for(int l=0;l<(n-i);l++){
            cout<<"*";
        }cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    pattern20(n);

    return 0;
}
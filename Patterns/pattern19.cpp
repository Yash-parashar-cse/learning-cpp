// Input Format: N = 6
// Result:   
// ************
// *****  *****
// ****    ****
// ***      ***
// **        **
// *          *
// *          *
// **        **
// ***      ***
// ****    ****
// *****  *****
// ************
#include<iostream>
using namespace std;
void pattern19(int n){
    // For upper half of the pattern..
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-i);j++){
            cout<<"*";
        }
        for(int k=0;k<(2*i);k++){
            cout<<" ";
        }
        for(int l=0;l<(n-i);l++){
            cout<<"*";
        }cout<<endl;
    }
    // For lower half of the pattern..
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int k=0;k<2*(n-1-i);k++){
            cout<<" ";
        }
        for(int l=0;l<=i;l++){
            cout<<"*";
        }cout<<endl;

    }
}
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    pattern19(n);

    return 0;
}
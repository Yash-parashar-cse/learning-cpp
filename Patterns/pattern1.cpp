// Example 2:
// Input: N = 6
// Output:
// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *

#include<iostream>
using namespace std;
void pattern1(int n){
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    pattern1(n);

    return 0;
}
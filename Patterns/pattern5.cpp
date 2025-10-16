// Input Format: N = 6
// Result:
// * * * * * *
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 

#include<iostream>
using namespace std;
void pattern5(int n){
    for(int i=0;i<=n;i++){
        for(int j=n-i;j>0;j--){
            cout<<"* ";
        }cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    pattern5(n);

    return 0;
}
// Input Format: N = 6
// Result:   
//      *
//      **
//      *** 
//      ****
//      *****
//      ******  
//      *****
//      ****
//      ***    
//      **
//      *
#include<iostream>
using namespace std;
void pattern10(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }cout<<endl;
    }
    // for inverted figure..
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-1-i);j++){
            cout<<"*";
        }cout<<endl;
    }

}
int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    pattern10(n);

    return 0;
}
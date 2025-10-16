// Input Format: N = 6
// Result:   
// 1          1
// 12        21
// 123      321
// 1234    4321
// 12345  54321
// 123456654321

#include<iostream>
using namespace std;
void pattern12(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
    
    // Loop to print the spaces..
    
        for(int j=0;j<(2*(n - i));j++){
            cout<<" ";
        }
    
    
        for(int j=i;j>=1;j--){
            cout<<j;
        } 
        cout<<endl; 
    }

}
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    pattern12(n);

    return 0;
}
// Input Format: N = 6
// Result:   
// 1
// 01
// 101
// 0101
// 10101
// 010101

#include<iostream>
using namespace std;
void pattern11(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if((i+j)%2 == 0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
        }cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    pattern11(n);

    return 0;
}
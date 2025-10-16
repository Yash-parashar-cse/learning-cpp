// Input Format: N = 6
// Result:   
// A B C D E F
// A B C D E 
// A B C D
// A B C
// A B
// A
#include<iostream>
using namespace std;
void pattern15(int n){
    for(int i=0;i<n;i++){
        int counter = 65;
        for(int j=0;j<(n-i);j++){
            cout<<char(counter)<<" ";
            counter ++;
        }cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    pattern15(n);

    return 0;
}
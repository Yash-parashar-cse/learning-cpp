// Input Format: N = 6
// Result:   
// A
// A B
// A B C
// A B C D
// A B C D E
// A B C D E F

#include<iostream>
using namespace std;
void pattern14(int n){
    for(int i=0;i<n;i++){
        int counter = 65;
        for(int j=0;j<=i;j++){
            cout<<char(counter)<<" ";
            counter++;
        }cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    pattern14(n);

    return 0;
}
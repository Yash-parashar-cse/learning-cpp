// Input Format: N = 6
// Result:   
// F
// E F
// D E F
// C D E F
// B C D E F
// A B C D E F

#include<iostream>
using namespace std;
void pattern18(int n){
    for(int i=0;i<n;i++){
        int startchar = (65 + n - 1)-i;
        for(int j=0;j<=i;j++){
            cout<<char(startchar)<<" ";
            startchar ++;
        }cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    pattern18(n);

    return 0;
}
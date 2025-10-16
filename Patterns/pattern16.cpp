// Input Format: N = 6
// Result:   
// A 
// B B
// C C C
// D D D D
// E E E E E
// F F F F F F
#include<iostream>
using namespace std;
void pattern16(int n){
    int counter =65;
    for(int i=0;i<n;i++){      
        for(int j=0;j<=i;j++){
            cout<<char(counter)<<" ";
        }counter ++;
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    pattern16(n);

    return 0;
}
// Input Format: N = 6
// Result:   
//      A     
//     ABA    
//    ABCBA   
//   ABCDCBA  
//  ABCDEDCBA 
// ABCDEFEDCBA

#include<iostream>
using namespace std;
void pattern17(int n){
    for(int i=0;i<n;i++){
        int counter = 65;
        for(int j=0;j<(n-i-1);j++){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<char(counter);
            counter += 1;
        }
        counter-=2;
        for(int l=0;l<i;l++){
            cout<<char(counter);
            counter --;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    pattern17(n);

    return 0;
}
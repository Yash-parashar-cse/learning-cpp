#include<iostream>
using namespace std;
int main(){
    int A[] = {2,4,6,8,10};
    // for(int x:A){
    //     cout<<++x<<endl;
    // }
    // REFERENCE MATHOD USING & TO MODIFY THE VALUES IN AN ARRAY
    for(int &x:A){
        cout<<++x<<endl;
    }
    for(int x:A){
        cout<<x<<endl;
    }
    return 0;
}
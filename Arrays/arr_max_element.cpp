#include<iostream>
using namespace std;
int main(){
    int A[4] = {100,200,300,452};
    int max = A[0];
    for(int i=1;i<4;i++){
        if(A[i]>max){
            max = A[i];
        }
    }
    cout<<"The maximum element in the array is:"<<max;
    return 0;
}
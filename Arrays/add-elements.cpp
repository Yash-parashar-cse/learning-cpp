#include<iostream>
using namespace std;
int main(){
    int A[7] = {4,8,6,9,5,2,7};
    int sum = 0;
    for(int i=0;i<7;i++){
        sum += A[i];
    }
    cout<<"The sum of elements in the array is:"<<sum;
    return 0;
}
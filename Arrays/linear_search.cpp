#include<iostream>
using namespace std;
int main(){
    int A[5],n=5,key;
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Enter the key:";
    cin>>key;
    for(int i=0;i<n;i++){
        if(A[i]==key){
            cout<<"The element "<<key<<" is present at the index "<<i;
            return 0;
        }
    }
    cout<<"Not found";
    return 0;
}
#include<iostream>
using namespace std;
int linear_search(int size,int arr[], int key){
    for(int i=0;i<size;i++){
        if(arr[i] == key){
            return i;
        }
    }return -1;
}
int main(){
    int size = 10;
    int key;
    int arr[size] = {1,2,5,6,9,3,8,7,10,11};
    cout<<"Enter the element to be searched: ";
    cin>>key;
    int result = linear_search(size,arr, key);
    cout<<"The element "<<key<< " is found at index: "<<result<<endl;

    return 0;
}
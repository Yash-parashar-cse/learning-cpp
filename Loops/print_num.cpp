// USING WHILE LOOP
#include<iostream>
using namespace std;
int main(){
    int num,i=1;
    cout<<"Enter the number: ";
    cin>>num;
    while(i<=num){
        cout<<i;
        cout<<"\n";
        i++;
    }
    return 0;
}
// USING DO-WHILE LOOP
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int i=1;
    do{
        cout<<i;
        cout<<"\n";
        i++;
    }while(i<=num);

    return 0;
}
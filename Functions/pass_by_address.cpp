#include<iostream>
using namespace std;
//PASS BY ADDRESS- ANY CHANGE IN FORMAL PARAMETERS WILL EFFECT THE ACTUAL PARAMETERS..

void swap(int *x,int *y){   //FORMAL PARAMETERS..
    int temp = *x;
    *x=*y;
    *y=temp;
}
int main(){
    int x = 10, y= 20;
    swap(&x,&y);  //ACTUAL PARAMETERS
    cout<<x<<" "<<y<<endl;
    return 0;
}
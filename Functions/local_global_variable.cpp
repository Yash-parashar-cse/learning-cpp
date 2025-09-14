#include<iostream>
using namespace std;
int g = 5;  //GLOBAL VARIABLE..
void fun(){
    // int a = 10;  //LOCAL VARIABLE..
    // a ++ ;
    // VARIABLES IN C++ HAVE BLOCK LEVEL SCOPE..
    int g = 10;
    {
        int g=0;
        g++;
        cout<<g<<endl;
    }
    cout<<g<<endl;

    // g ++ ;
    // cout<<a<<endl;
    // cout<<g<<endl;

}
int main(){
    
    cout<<g<<endl;
    fun();
    cout<<g<<endl;
    return 0;
}
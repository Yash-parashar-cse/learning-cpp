#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char main[20] = "Programming";
    // char sub[50] = "gram";
    // char sub[50] = "m";
    char sub[10] = "k";
    if(strstr(main,sub)!=NULL){
        cout<<strstr(main,sub)<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}
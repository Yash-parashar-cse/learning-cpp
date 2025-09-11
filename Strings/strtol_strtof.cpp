#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s1[10] = "235";
    char s2[10] = "54.78";

    // IN strtol parameters(NULL signifies end of string and 10 is the base(for decimal numbers))
    long int x= strtol(s1,NULL,10);
    float y = strtof(s2,NULL);

    cout<<x+10<<" "<<y+1.22<<endl;
    return 0;
}
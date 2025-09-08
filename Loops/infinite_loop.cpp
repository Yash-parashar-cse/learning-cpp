// #include<iostream>
// using namespace std;
// int main(){
//     int i=0;    
//     for(;i<10;i++){
//         cout<<i<<" "<<"Hello!";
//         cout<<"\n";
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int i=0;    
//     for(;i<10;){
//         cout<<i<<" "<<"Hello!";
//         cout<<"\n";
//         i++;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int i=0;    
    for(;;){        //CONDITION TO IMPLEMENT IN INFINITE LOOP
        cout<<i<<" "<<"Hello!";
        cout<<"\n";
        i++;
        if(i>10){
            break;
        }
    }
    return 0;
}
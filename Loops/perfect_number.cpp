#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The factors of "<<n<<" are: "<<endl;
    for(int i=1;i<=n;i++){
        if(n%i == 0){
            cout<<i<<endl;
            sum+=i;
        }
    }cout<<"The sum of the factors is: "<<sum;
    
    if(n*2 == sum){
        cout<<endl<<n<<" is a perfect number";
    }
    else{
        cout<<endl<<n<<" is not a perfect number";
    }
    
    return 0;
}
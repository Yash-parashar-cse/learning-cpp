#include<iostream>
using namespace std;
int main(){
    int A[10][10], B[10][10], mult[10][10], r1 ,c1 ,r2 ,c2 ,i ,j, k;
    cout<<"Enter the number of rows and columns of first matrix: ";
    cin>>r1>>c1;
    cout<<"Enter the number of rows and columns of second matrix: ";
    cin>>r2>>c2;
    
    if(c1!=r2){
        cout<<"The given matrix can't be multiplied.";
        return 0;
    }
    cout<<"Enter the elements of matrix 1: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<"Enter a"<<i<<j<<": ";
            cin>>A[i][j];
        }
    }
    cout<<"Enter the elements of matrix 2: "<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<"Enter b"<<i<<j<<": ";
            cin>>B[i][j];
        }
    }
    // Multiplying matrix a and b and storing in array mult.
 for(i = 0; i < r1; ++i)
 for(j = 0; j < c2; ++j)
 {
 mult[i][j]=0;
 for(k = 0; k < c1; ++k)
 {
 mult[i][j] += A[i][k] * B[k][j];
 }
 }

 // Displaying the multiplication of two matrix.
 cout << endl << "Output Matrix: " << endl;
 for(i = 0; i < r1; ++i){
 for(j = 0; j < c2; ++j)
 {
 cout << " " << mult[i][j];
 
 }cout<<endl;
 }
    return 0;
}
#include<iostream>
using namespace std;

int fact(int num){
    int prod=1;
    for(int i=2;i<=num;i++){
        prod*=i;
    }
    return prod;
}

int main(){
    int n;
    cin>>n;
    int space=(2*n-1)/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            if(j==1||j==2*i-1 || i==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

Input:
5

Output:
    *
   * *
  *   *
 *     *
*********
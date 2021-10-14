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
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}

Input:
5

Output:
     1 
    1 1 
   1 2 1 
  1 3 3 1 
 1 4 6 4 1 

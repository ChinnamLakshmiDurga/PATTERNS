#include <iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   for(int i=1;i<=n;i++){
       for(int j=5;j>=i;j--){
               cout<<i<<" ";
        }
       cout<<endl;
   }
   return 0;
}

Input:
5

Output:
1 1 1 1 1 
2 2 2 2 
3 3 3 
4 4 
5 

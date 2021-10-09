#include <iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n;j++){
            if(j==1|| (i==j) || i+j==11|| j==2*n)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
  }
  for(int i=n;i<=2*n;i++){
        for(int j=1;j<=2*n;j++){
            if(j==1 || i+j==11|| i==j || j==2*n)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
  }
  return 0;
}

Input:
5
  
Output:
*        *
**      **
* *    * *
*  *  *  *
*   **   *
*   **   *
*   **   *
*  *  *  *
* *    * *
**      **
*        *

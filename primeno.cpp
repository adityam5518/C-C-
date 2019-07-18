#include <iostream>
using namespace std;
int main()
{
  int n,m,flag=0;
    cout<<"Enter no\n";
    cin>>n;
    m=n/2;
    for(int i=2;i<=m;i++)
    {
    if(n%i==0)
    {
    flag=1;
    break;
    cout<<flag;
    }
    }
    if(flag==0)
      cout<<"\nNo is Prime ";
     else
      cout<<"\n Not Prime no";
    return 0;
}


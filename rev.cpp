#include <iostream>  
using namespace std;  
int main()  
{  
int n,r,rev=0,temp=0;    
cout<<"Enter the Number=  ";    
cin>>n;    
while(n>0)
{
    r=n%10;
    rev=(rev*10)+r;
    n=n/10;
}
cout<<"\nReverse is"<<rev;
}  

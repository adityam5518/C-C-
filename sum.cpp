#include <iostream>  
using namespace std;  
int main()  
{  
int n,r,sum=0,temp=0;    
cout<<"Enter the Number=  \n";    
cin>>n;    
while(n>0)
{
    r=n%10;
    cout<<r;
    sum=sum+r;
    n=n/10;
}
cout<<"\nSum is"<<sum;
}  

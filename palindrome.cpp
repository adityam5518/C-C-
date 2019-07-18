#include <iostream>
using namespace std;
int main()
{
    int n,temp,sum=0,rem;
    cout<<"Enter a no\n";
    cin>>n;
    temp=n;
    
    while(n>0)
    {
    rem=n%10;
    sum=(sum*10)+rem;
    n=n/10;
    }
    if(temp==sum)
    cout<<"\nPalindrome";
    else
    cout<<"\nNot Palindrome";
   
}

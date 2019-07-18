#include <iostream>
using namespace std;
void fibo(int n){
    static int n1=0,n2=1,n3;
    if(n>0)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        cout<<n3<<"\n";
        fibo(n-1);
    }
}
int main()
{
    cout<<"Hello World";
    int n,n1=0,n2=1,n3;
    cout<<"Enter no of elements";
    cin>>n;
    cout<<0<<"\n"<<1<<"\n";
    fibo(n-2);
    return 0;
}


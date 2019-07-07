#include<stdio.h>
void bbsort(int a[],int n){
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<n-i-1;j++)
       if(a[j]>a[j+1])
       {
         int temp=a[j];
         a[j]=a[j+1];
         a[j+1]=temp;
       }
    }
}
int main(){
   int a[10],n,i,j;
   
   printf("Enter no of elements\n");
   scanf("%d",&n);
   
   printf("Enter the elements\t");
      for(i=0;i<n;i++)
      {
      scanf("%d",&a[i]);
      }
      bbsort(a,n);
      for(i=0;i<n;i++)
      {
      printf("%d\t",a[i]);
      }
}

#include<stdio.h>
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void selectsort(int a[],int n){
    int i,j,min,temp;
    for(i=0;i<n-1;i++)
    {
    min=i;
             for(j=i+1;j<n;j++)
             {
                  if(a[j]<a[min])
                  {
                  swap(&a[min],&a[j]);
                  };
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
      selectsort(a,n);
      printf("\n");
      for(i=0;i<n;i++)
      {
      printf("%d\t",a[i]);
      }
}

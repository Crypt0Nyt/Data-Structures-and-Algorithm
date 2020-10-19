#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20]={0};
    int n,i;


    printf("Enter the values for array:\n");
    scanf("%d",&n);

    printf("Enter the elements of array:\n");

    for(i=0;i<n;i++)
     scanf("%d",&a[i]);


   //array before sorting
   for(i=0;i<n;i++)
   printf("%d",a[i]);

   //Logic of bubble sort

   for(int p=1;p<n;p++)
   {
       for(int c=0;c<n-p;c++)
        if(a[c]>a[c+1])
       {
           //swapping
           int temp=0;
           temp= a[c];
           a[c]=a[c+1];
           a[c+1]=temp;
       }
   }

    //array after sorting
    printf("After sorting:");
    for(int i=0;i<n;i++)
        printf("%d\t",a[i]);

    return 0;

}


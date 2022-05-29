#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *arr,i,j,n,temp,k;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);

    arr=(int*)malloc(sizeof(int)*n);

    for(i=0;i<n;i++)
    {
        printf("Enter element %d of array : ", i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("Elements of array after sorting: \n");

    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("\nWhich smallest element do you want to determine: ");
    scanf("%d",&k);

    if(k<=n)
        printf("Desired smallest element is: %d\n",arr[k-1]);
    else
        printf("Please enter a valid value for finding the particular smallest element\n");
}

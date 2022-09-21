#include<stdio.h>
#define Max_size 100
int main()
{
    int arr[Max_size];
    int i,N;
    printf("Enter the number of elements in the array");
    scanf("%d",&N);

    printf("Enter the elements in the array: ");
    for(i=0;i<N;i++);
    {
        scanf("%d",&arr[Max_size]);
    }
    printf("The number of negative numbers in the array are: ");
    if(arr[Max_size]<0);
    {
        i++;
        printf("%d\t",i);
    }
}
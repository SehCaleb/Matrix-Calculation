#include<stdio.h>
int main()
{
    int arr[2][2] , arr2[2][2] ,a, b, product;
    printf("Enter the elements of matrix A : \n");
    for(a=0;a<2;a++)
    {
        for(b=0;b<2;b++)
        {
            scanf("%d",&arr[a][b]);
        }
    }
    printf("Enter the elements of matrix B : \n");
    for(a=0;a<2;a++)
    {
        for(b=0;b<2;b++)
        {
            scanf("%d",&arr2[a][b]);
        }
    }
    printf("The product of the two arrays is : \n");
    for(a=0;a<2;a++)
    {
        for(b=0;b<2;b++)
        {
            product = arr[a][b] * arr2[a][b];
            printf("%d ",product);
        }
        printf("\n");
    }
    return 0;
}
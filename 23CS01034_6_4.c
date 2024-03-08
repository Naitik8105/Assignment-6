#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter number of elements of an array ");
    scanf("%d", &n);
    printf("Enter elements of an array ");
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter number of elements of second array ");
    scanf("%d", &m);
    printf("Enter elements of second array ");
    int b[n];
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);    
    int check=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            {
                if(a[j]==b[i])
                    check++;
            }
    }
    if(check>=m)
        printf("It is a subset");
    else 
        printf("It is not a subset");    
    return 0;
}
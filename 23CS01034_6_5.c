#include <stdio.h>
int main()
{
    printf("Enter number of rows and columns ");
    int m, n;
    scanf("%d%d", &m, &n);
    int a[m][n];
    printf("Enter %d elements ", (m * n));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    printf("The transpose of given matrix is: \n");
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
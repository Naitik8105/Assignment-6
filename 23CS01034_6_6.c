#include <stdio.h>
void temp(int m, int a[][7])
{
    float avg[m];
    for (int i = 0; i < m; i++)
    {
        avg[i] = 0;
        for (int j = 0; j < 7; j++)
        {
            avg[i] += a[i][j];
        }
        avg[i] /= 7;
    }
    for (int i = 0; i < m; i++)
    {
        printf("%.2f\t", avg[i]);
    }
}
int main()
{
    printf("Enter number of cities ");
    int m;
    scanf("%d", &m);
    int a[m][7];
    for (int i = 0; i < m; i++)
    {
        printf("Enter tempurates of %d city \n", (i + 1));
        for (int j = 0; j < 7; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    temp(m,a);
    return 0;
}
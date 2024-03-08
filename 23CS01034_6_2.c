#include <stdio.h>
int avgnum(int n, int array[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    float avg = sum / n;

    for (int i = 0; i < n; i++)
    {
        if (array[i] > avg)
        {
            printf("%d  ", array[i]);
        }
    }
}
int main()
{
    int n;
    printf("Enter number of elements in array");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    avgnum(n, arr);

    return 0;
}
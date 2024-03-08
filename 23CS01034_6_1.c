#include <stdio.h>
#include <math.h>

int prime(int a)
{
    int flag = 0;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {

            flag = 1;
            return 0;
        }
    }
    if (flag == 0)
    {
        return 1;
    }
}
int main()
{
    int lowerlimit, upperlimit;
    printf("Enter the lowerlimit and upperlimit of the range:");
    scanf("%d %d", &lowerlimit, &upperlimit);
    for (int i = lowerlimit; i <= upperlimit; i++)
    {
        if ((prime(i)) == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
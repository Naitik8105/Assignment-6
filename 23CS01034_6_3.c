// #include <stdio.h>
// int revarr(int n,int arr[]){
//     int counter=n;
// }
// int main()
// {
//     int n;
//     printf("Enter size of array:");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     return 0;
// }
#include <stdio.h>
void func(int arr[], int low, int high)
{
    if (low == high)
    {
        return;
    }
    int temp = arr[high];
    arr[high] = arr[low];
    arr[low] = temp;
    func(arr, low + 1, high - 1);
}
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    func(arr, 0, n - 1);

    printf("reversed array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>
int main()
{
    int size, N, check, a[size];

    printf("Enter Size of Array : ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter number : ");
        scanf("%d", &a[i]);
    }

    printf("Enter Number to find : ");
    scanf("%d", &N);

    check = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == N)
        {
            check = i + 1;
            break;
        }
    }
    if (check == 0)
    {
        printf("Number not Found :(");
    }
    else
    {
        printf("Number Found :)");
    }
    printf("\nWell Done!..");
    return 0;
}
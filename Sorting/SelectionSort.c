#include <stdio.h>
int main()
{
    int array[100], n, i, j, pos, temp;

    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter the numbers:\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    for (i = 0; i < n - 1; i++) // finding minimum element (n-1) times
    {
        pos = i;

        for (j = i + 1; j < n; j++)
        {
            if (array[pos] > array[j])
                pos = j;
        }
        if (pos != i)
        {
            temp = array[i];
            array[i] = array[pos];
            array[pos] = temp;
        }
    }

    printf("Sorted list in ascending order:\n");

    for (i = 0; i < n; i++)
        printf("%d\n", array[i]);

    return 0;
}

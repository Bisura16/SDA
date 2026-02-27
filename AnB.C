#include <stdio.h>

int main()
{
    int A[] = {2, 5, 7, 3, 1};
    int B[] = {2, 6, 7, 3, 2};
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);
    printf("ANB: ");

    for (int i = 0; i < n; i++)
    {
        int found = 0;
        for (int j = 0; j < m ; j++)
        {
            if (A[i] == B[j])
            {
                found = 1;
                break;
            }
        }
        if (found)
        {
            printf("%d ", A[i]);
        }
    }
}
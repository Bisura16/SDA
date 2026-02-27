#include <stdio.h>

int main()
{
    int A[] = {2, 5, 4, 1, 3, 5};
    int B[] = {1, 4, 5, 6, 7, 3};
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);

    for (int i = 0; i < n; i++)
    {
        int found = 0;
        for (int j = 0; j < m; j++)
        {
            if (A[i] == B[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            printf("%d ", A[i]);
        }
    }
}
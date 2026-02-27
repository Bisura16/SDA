#include <stdio.h>

int main()
{
    int A[] = {2, 5, 7, 3, 1};
    int B[] = {2, 6, 7, 3, 2};
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);
    int AUB[n + m];
    int k = 0;
    printf("AUB: ");
    for (int i = 0; i < n; i++)
    {
        AUB[k++] = A[i];
    }

    for (int i = 0; i < m; i++)
    {
        int found = 0;
        for (int j = 0; j < m; j++)
        {
            if (B[i] == AUB[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            AUB[k++] = B[i];
        }
    }
    for(int i = 0; i <k; i++){
    printf("%d ", AUB[i]);
    }
}
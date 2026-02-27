#include <stdio.h>

int main()
{
    int A[] = {2, 4, 6, 1, 2};
    int B[] = {2, 4, 6, 100, 2};
    int n = sizeof(A) / sizeof(A[0]);
    printf("A-B: ");
    
    for (int j = 0; j < n; j++)
    {
        int found = 0;
        for (int i = 0; i < n; i++)
        {
            if (A[j] == B[i])
            {
                found = 1;
                break;
            }
        }
        if(!found){
            printf("%d ", A[j]);
        }
    }
    return 0;
}
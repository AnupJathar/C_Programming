//Display all numbers that contain exactly 3 digits

#include <stdio.h>
#include <stdlib.h>

void Digits(int Arr[], int iLength) {
    for (int i = 0; i < iLength; i++) {
        if (Arr[i] >= 100 && Arr[i] <= 999) {
            printf("%d\n", Arr[i]);
        }
    }
}

int main() {
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if (p == NULL) {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for (iCnt = 0; iCnt < iSize; iCnt++) {
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    Digits(p, iSize);

    free(p);
    return 0;
}
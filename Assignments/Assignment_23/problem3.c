//Find the index of the last occurrence of a number

#include <stdio.h>
#include <stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo) {
    int iIndex = -1;
    for (int i = 0; i < iLength; i++) {
        if (Arr[i] == iNo) {
            iIndex = i;
        }
    }
    return iIndex;
}

int main() {
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the number to search: ");
    scanf("%d", &iValue);

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

    int iRet = LastOcc(p, iSize, iValue);
    if (iRet == -1) {
        printf("There is no such number\n");
    } else {
        printf("Last occurrence of number is %d\n", iRet);
    }

    free(p);
    return 0;
}
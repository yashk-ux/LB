#include<stdio.h>

// Error due to stdlib.h

int main()
{
    int *Brr = NULL;

    int iLength = 0;

    int iCnt = 0;

    //Step 1 : Accept the number of elemets
    printf("Enter Number of elements : \n");
    scanf("%d ", &iLength);
    
    // Step 2 : Allocate the Memory
    Brr = (int*) malloc (iLength * sizeof(int));

    // Step 3 : Accept the value from the user
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    // Step 4 : Use the memory(Logic)

    free(*Brr);

    return 0;
}
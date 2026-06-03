#include<stdio.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {    
        printf( "%d \n", Arr[iCnt]);
    }
}

int main()
{
    int iLength = 4;

    //printf("Size of the Array : \n");
    //scanf("%d \n",&iLength);
    
    int Brr[iLength];

    int iCount = 0;

    printf("Enter elements of Array : \n");
    for(iCount = 0 ; iCount <= iLength ; iCount++)
    {
        scanf("%d ",Brr[iCount]);
    }

    Display(Brr, iLength);
    
    return 0;
}
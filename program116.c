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

    Brr[0];
    Brr[1];
    Brr[2];
    Brr[3];

    Display(Brr, iLength);
    
    return 0;
}
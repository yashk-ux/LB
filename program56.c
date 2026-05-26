// Input : 5
// Output : 0 1 2 3 4 

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1 ; iCnt < iNo ; iCnt += 1)
    {
        printf("%d ", iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d \t", &iValue);

    Display(iValue);
    
    return 0;
}
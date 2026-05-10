#include<stdio.h>

void Display(int iNO)
{
    int iCnt = 0;
    
    for(iCnt = 1 ; iCnt <= iNO ; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the frequency : ");
    scanf("%d", &iValue);

    // Iteration

    Display(iValue);
    
    return 0;
}


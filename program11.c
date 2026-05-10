/*Algorithm

    START
        Accept number from the user as NO
        If No is completely divisible by 2 
            then print even
        otherwise
            print Odd
    STOP




    START
        Accept number form the user as NO
        Divide NO by 2
        If Remainder is 0
            then print as Even
        otherwise
            print as odd
    STOP
*/

#include<stdio.h>

int main()
{
    int iValue = 0;

    int iRemainder = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRemainder = iValue % 2;
    
    if(iRemainder == 0)
    {
        printf("Number is even   /n");
    }

    else
    {
        printf("Number is odd      \n");
    }
    
    return 0;
}
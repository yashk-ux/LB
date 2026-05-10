/*
    Algorithm

    START
        Accept Firts number as NO1
        Accept Second Number as NO2
        Perform Addition of NO1 and NO2
        Display the Result
    STOP
*/

#include<stdio.h>

int main()
{
    float i,j,k;

    printf("Enter First Number : \n");
    scanf("%f", &i);
    
    printf("Enter Second Number : \n");
    scanf("%f", &j);

    k = i + j;

    printf("Addition is : %f\n", k);
    
    return 0;
}
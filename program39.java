//Type 1

/*
    Algorithm
        Start
            Accept the input from the user
            Check if the number is divisible by 3 and 5
            Display the result
        Stop
*/

import java.util.*;

class program39
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iValue = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        if((iValue % 3 == 0) && (iValue % 5 == 0))
        {
            System.out.println("Number is divisible by 3 and 5");
        }
        else
        {
            System.out.println("Number is not divisible by 3 and 5");
        }
    }
}
import java.util.*;

class program91
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        DigitX dobj = new DigitX();
        
        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        iRet = dobj.EvenSumDigit(iValue) ;

        System.out.println("Summation of Even Digits is : " + iRet);
    }
}

class DigitX
{
    public int EvenSumDigit(int iNo)
    {
        int iDigit = 0;
        
        int iEvenSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10 ;

            if(iDigit % 2 == 0)
            {
                iEvenSum = iEvenSum + iDigit;
            }

            iNo = iNo / 10;

        }

        return iEvenSum;
    }
}
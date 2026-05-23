import java.util.*;

class program36
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        String sName = null;
        int iAge = 0;
        float fMarks = 0;

        System.out.println("Enter your Name : ");
        sName = sobj.nextLine();

        System.out.println("Enter you Age : ");
        iAge = sobj.nextInt();

        System.out.println("Enter your Marks : ");
        fMarks = sobj.nextFloat();

        System.out.println("Enter your Name : " + sName);
        System.out.println("Enter your Age : " + iAge);
        System.out.println("Enter your Marks : " + fMarks);
    }
}
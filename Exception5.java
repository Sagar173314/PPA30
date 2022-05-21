import java.lang.*;
import java.util.*;

class demo
{
    public void division(int no1, int no2) // throws ArithematicException
    {
        return no1/no2;
    }
}
class Exception5
{
    public static void main(String a[])
    {
        Scanner sobj= new Scanner(System.in);
       System.out.println("Enter first number");
        int no1= sobj.nextInt();
        System.out.println("Enter second number");
        int no2=sobj.nextInt();
        Demo dobj = new Demo();

        try
        {
        int ret=dobj.Division(no1,no2);
        System.out.println("Divison is:"+ret);
        }

        catch(ArithmeticException obj)
        {
            System.out.println("Inside catch");
        }

    }
}
   

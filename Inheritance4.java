import java.lang.*;

class Inheritance4
{
    public static void main(String a[])
    {
        System.out.println("Inside DerivedX sun");
    }
}
class Base                  //class Base extends Object
{
    public int i;
    public int j;

    public void fun()
    {
        System.out.println("Inside base fun");
    }
}
class Derived extends Base          //class Derivrd : public base
{
    public int x;
    public int y;

    public void gun()
    {
        System.out.println("Inside base gun");
    }
}
class DerivedX extends Derived
{
    public int a;

    public void sun()
    {
        System.out.println("Inside DerivedX sun");
    }
}
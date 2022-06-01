import java.lang.*;

class AbstractDemo 
{
    public static void main(String a[])
    {
        PNB pobj = new PNB();
        SBI sobj = new SBI();

        pobj.Credit(1000);
        pobj.Debit(200);

        System.out.println(pobj.Balance);
    }
}
abstract class RBI
{
    public int Balance;
    public RBI()
    {
        this.Balance = 0;
    }

    public void credit(int Amount)
    {
        this.Balance = this.Balance + Amount;
    }

    public void Debit(int Amount)
    {
        this.Balance = this.Balance - Amount;
    }

    public Abstract int CalculateIntrest();
}
class SBI extends RBI
{
    public int AccountNumber;
    public int IFSC;

    public int CalculateInterest()
        return 6;
    }
} 
class PNB extends RBI
{
    public int AccountNumber;
    public int IFSC;

    public int CalculateInterest()
    {
        return 7;
    }
}

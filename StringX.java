import java.io.*;

class StringX
{
    public static void main(String arg[])
    {
        //String literals
        String str1 = "Hello";
        String str2 = "World";

        System.out.println(str1);
        System.out.println(str2.length());

        String str3 = str1+str2;
        System.out.println(str3);

        //String objects
        String str4 = new String("Hello");
        String str5 = new String("World");
        String str6 = new String("Hello");
        

    }
}    
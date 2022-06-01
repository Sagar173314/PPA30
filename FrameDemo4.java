import java.lang.*;
import java.awt.*;
import java.awt.event.*;

class FrameDemo4
{
    public static void main(String arg[])
    {
        System.out.println("Print the data on console");
        
        MarvellousFrame mobj = new MarvellousFrame("PPA");
    }
}

class MarvellousListener extends WindowAdapter
{
    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
}

class MarvellousFrame
{
    public Frame fobj;

    public MarvellousFrame(String name)
    {
        fobj = new Frame(name);
        fobj.setSize(600,600);
        fobj.setVisible(true);

        fobj.addWindowListener(new MarvellousListener());
    }
}

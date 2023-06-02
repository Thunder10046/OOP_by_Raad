package JAVA_prog;

public class access_modifier {
    
    private int x; 
     
    private void setData(int y)
    {
        x = y;
    }

    public void display()
    {
        System.out.println(x);
    }

    public static void main(String[] args) {
        access_modifier am = new access_modifier();
        am.setData(5);
        am.display();
    }

    
}
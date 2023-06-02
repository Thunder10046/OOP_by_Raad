interface AI{
    public void PrintA(); 
}

interface BI{
    public void PrintB(); 
}

interface CI{
    public void PrintC(); 
}

class A implements AI,BI{
    
    public void PrintA()
    {
        System.out.println("From AI");
    }
    public void PrintB()
    {
        System.out.println("From BI");
    }
    public void PrintC()
    {
        System.out.println("From CI");
    }
}
 

public static void main(String[] args) {
     A obj = new A();
     obj.PrintA();
     obj.PrintB();
     obj.PrintC();       
}

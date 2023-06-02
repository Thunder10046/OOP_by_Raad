class A {
    int x;

    public A() {
        x = 0;
    }

    public A(int x) {
        this.x = x;
    }

    public int getX() {
        return (x + 10);
    }
}

class B extends A {
    int x = 20;

    public int getX() {
        return super.getX();
    }
}

public class inheritance {
    public static void main(String[] args) {
    A obj1 = new A();
    B obj2 = new B();
    int obtained = obj2.getX();
    System.out.println(obtained);
    System.out.println(obj1.getX());    

    }
}
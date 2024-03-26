class A{
public void methodA(){
    System.out.println("method of A");
}
}
class B extends A{
    public void methodC(){
        System.out.println("method of B");
    }
}
class C extends A{
    public void methodC(){
        System.out.println("method of C");
    }
}
class inheritance{
    public static void main(String args[]){
        B ob1=new B();
        C ob2=new C();
        ob1.methodA();
        ob2.methodA();
    }
}
to access the data member of the parent class when both parent and child class have member of same name.
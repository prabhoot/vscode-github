class parent {
    void display(){
        System.out.println("parent class method");
    }
}
class child extends parent{
    void display(){
        System.out.println("method of child class");
    }
    void printmsg(){
        display();
        super.display();
    }
    public static void main(String args[]){
        child obj = new child();
        obj.printmsg();
    }
}
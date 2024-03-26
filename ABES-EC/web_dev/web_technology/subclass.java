class superclass{
    int num=100;
}
class subclass extends superclass{
    int num=110;
    void print(){
        System.out.println(super.num);//num
    }
    public static void main(String args[]){
        subclass obj=new subclass();
        obj.print();
    }
}

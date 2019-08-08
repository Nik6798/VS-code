/**
 * Inheritance
 */
public class Inheritance extends inherit{

    public static void main(String[] args) {
        String ar="lose";
        System.out.println(ar);
        Inheritance it=new Inheritance();
        it.sub();
    }
}

class inherit {
    public void sub(){
        System.out.print("ln");
    }
    
}

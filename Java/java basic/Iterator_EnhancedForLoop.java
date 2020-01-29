import java.util.*;


//this is a class which gives an idea about Iterator and Enhanced for loop in java
/**
 * Iterator_EnhancedForLoop
 */
public class Iterator_EnhancedForLoop {

    public static void main(String args[]){
        //3 ways to initialize data in array

        // int val[]={2,3,4};
        // int []val2=new int[]{2,4,5,6,3};
        
        int values[]=new int[3];
        Object values1[]=new Object[4];
        values1[0]="nikhil";
        Scanner inp=new Scanner(System.in);
        for(int i=0;i<3;i++){
            System.out.println("Enter the element");
            values[i]=inp.nextInt();
        }
        System.out.println(Arrays.toString(values1));
//System.out.print(Arrays.deepToString(values)); if the array contains an array then we can use this method

        System.out.print(Arrays.toString(values));

           //Collections 
           Collection col=new ArrayList<>();
           col.add("Nik");
           col.add("saini");
           col.add(21);

           //Traversing using Iterator 
           Iterator it= col.iterator();
        //  1
           //Traversing using enhanced for loop
        //    for(Object i : values){
        //        System.out.println(i);
        //    }

           while(it.hasNext()){
               System.out.println(it.next());
           }
        inp.close();//this will close the scanner
        //System.out.print(Arrays.deepToString(values)); if the array contains an array then we can use this method
   

        
    }
    
}
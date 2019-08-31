import java.io.*;
public class reverse_and_normal {

    public static void main(String[] args) {
        int row = 1;
        int i = 0;
        int j = 0;
        int max = 5;
        for (i = 1; i <= row; i++) {
            System.out.print(i+" ");

            if (i == row) {
                for (j = 1; j <= max; j++) {
                    System.out.print("  ");
                }
                for (j = 1; j <= max; j++) {
                    System.out.print(j + " ");
                }
                System.out.println();
                i = 0;
                row++;
                max--;
            }
            if (row > 5)
                break;
        }
    }
}
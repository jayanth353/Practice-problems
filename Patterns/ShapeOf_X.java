/* 
1 2 3 4 5 
 2 3 4 5 
  3 4 5 
   4 5 
    5 
   4 5 
  3 4 5 
 2 3 4 5 
1 2 3 4 5
*/
import java.util.Scanner;


class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter any number:");
        int a=sc.nextInt();
        for(int i=1;i<=a;i++)
        { 
            for(int k=1;k<i;k++)
            {
                System.out.print(" ");
            }
            for(int j=i;j<=a;j++)
            {
                System.out.print(j+" ");
            }
         System.out.println();
        }
        for(int i=a-1;i>0;i--)
        {
             for(int k=i-1;k>0;k--)
            {
                System.out.print(" ");
            }
            for(int j=i;j<=a;j++)
            {
                System.out.print(j+" ");
            }
            System.out.println();
        }

    }
}

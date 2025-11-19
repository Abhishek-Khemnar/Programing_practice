import java.util.Scanner;

class program54 {
    public static void main(String A[]) {
        int no1 = 0;
        int no2 = 0;
        int Ans = 0;

        Scanner sobj = null;
        sobj = new Scanner(System.in);
        System.out.println("Enter  first number");
        no1 = sobj.nextInt();
        System.out.println("Enter second number");
        no2 = sobj.nextInt();
        Ans = no1 + no2;

        System.out.println("Additon is :" + Ans);

    }
}
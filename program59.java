import java.util.Scanner;

class Check {
    public void displayfactor(int no) {
        for (int i = 1; i <= (no / 2); i++) {
            if (no % i == 0) {
                System.out.println(i);

            }
        }

    }
}

class program59 {
    public static void main(String A[]) {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the number");
        int iValue = sobj.nextInt();
        Check cobj = new Check();
        cobj.displayfactor(iValue);

    }
}
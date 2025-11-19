import java.util.Scanner;

class Check {
    public boolean checkeven(int no) {
        if (no % 2 == 0) {
            return true;
        }
        return false;

    }
}

class program58 {
    public static void main(String A[]) {
        int iValue = 0;
        boolean bret = false;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number");
        iValue = sobj.nextInt();
        Check cobj = new Check();

        bret = cobj.checkeven(iValue);
        if (bret == true) {
            System.out.println("Even number");
        } else {
            System.out.println("Not Even number");
        }

    }
}
import java.lang.foreign.AddressLayout;
import java.util.Scanner;

class Arithmatic {
    public int A;
    public int B;

    public Arithmatic(int No1, int No2) {
        A = No1;
        B = No2;
    }

    public int Addition() {
        int Ans = A + B;
        return Ans;

    }
}

class program60 {

    public static void main(String A[]) {

        int iValue1 = 0, iValue2 = 0, iRet = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter  first number");
        iValue1 = sobj.nextInt();
        System.out.println("Enter second number");
        iValue2 = sobj.nextInt();
        Arithmatic aobj = new Arithmatic(iValue1, iValue2);

        iRet = aobj.Addition();

        System.out.println("Additon is :" + iRet);

    }
}

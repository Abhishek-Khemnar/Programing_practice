import java.lang.foreign.AddressLayout;
import java.util.Scanner;

class program56 {

    public static int Addition(int No1, int No2) {
        int Ans = No1 + No2;
        return Ans;

    }

    public static void main(String A[]) {

        int iValue1 = 0, iValue2 = 0, iRet = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter  first number");
        iValue1 = sobj.nextInt();
        System.out.println("Enter second number");
        iValue2 = sobj.nextInt();
        program56 pobj = new program56();
        iRet = Addition(iValue1, iValue2);

        System.out.println("Additon is :" + iRet);

    }
}

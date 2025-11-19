import java.util.Scanner;

class Arithmatic {
    public int Addition(int No1, int No2) {
        int Ans = No1 + No2;
        return Ans;
    }

}

class program57 {
    public static void main(String A[]) {
        int iVlaue1 = 0, iVlaue2 = 0, iRet = 0;
        Scanner sobj = new Scanner(System.in);
        Arithmatic Aobj = new Arithmatic();
        System.out.println("Enter number 1");
        iVlaue1 = sobj.nextInt();
        System.out.println("Enter second number");
        iVlaue2 = sobj.nextInt();
        iRet = Aobj.Addition(iVlaue1, iVlaue2);
        System.out.println("Additon is" + iRet);

    }
}
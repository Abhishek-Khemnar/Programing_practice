import java.util.Scanner;

class program52 {

    public static void main(String A[]) {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter your name ");
        String name = sobj.nextLine();
        System.out.println("Enter your age ");
        int Age = sobj.nextInt();
        System.out.println("Enter your marks");
        float marks = sobj.nextFloat();

        System.out.println("Your name is : " + name);
        System.out.println("your age is :" + Age);
        System.out.println("your marks is :" + marks);

    }

}

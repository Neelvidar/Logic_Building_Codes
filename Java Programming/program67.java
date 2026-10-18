import java.util.Scanner;

class program67 {
    public static void main(String A[]) {
        Scanner scanner = new Scanner(System.in);
        int ivalue = 0;

        Iteration iteration = new Iteration();

        System.out.println("Enter the Frequency :");
        ivalue = scanner.nextInt();

        iteration.Display(ivalue);
    }
}

class Iteration {

    public void Display(int iNo) {
        int icnt = 0;
        icnt = 1;

        do {
            System.out.println("Jay Ganesh....");
            icnt++;
        } while (icnt <= iNo);

    }

}

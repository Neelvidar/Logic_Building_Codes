

import java.util.Scanner;

class Arithmatic {
    public static int Addition(int iNo1, int iNo2) {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }
}

class program37 {
    public static int Addition(int iNo1, int iNo2) {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }

    public static void main(String A[]) {
        Scanner scanner = null;
        int iValue1 = 0, iValue2 = 0, iResult = 0;

        scanner = new Scanner(System.in);

        System.out.println("Enter First Number : ");
        iValue1 = scanner.nextInt();

        System.out.println("Enter Second Number : ");
        iValue2 = scanner.nextInt();

        iResult = Arithmatic.Addition(iValue1, iValue2); // error

        System.out.println("Addition is : " + iResult);

    }
}

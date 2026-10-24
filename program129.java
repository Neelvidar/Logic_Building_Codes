<<<<<<< HEAD:program129.java
import java.util.Scanner;

class Digit {
    public int SumDigits(int iNo) {
        int iSum = 0;

        if (iNo < 0) {
            iNo = -iNo;
        }
        while (iNo != 0) {
            iSum = iSum + (iNo % 10);
            iNo = iNo / 10;

        }

        return iSum;
    }
}

class program129 {
    public static void main(String A[]) {

        Scanner scanner = new Scanner(System.in);
        int iRet = 0;
        Digit digit = new Digit();

        System.out.println("Enter Number : ");

        int iValue = scanner.nextInt();

        iRet = digit.SumDigits(iValue);

        System.out.println("Summation of digits : " + iRet);
    }
=======
import java.util.Scanner;

class Digit {
    public int SumDigits(int iNo) {
        int iSum = 0;

        if (iNo < 0) {
            iNo = -iNo;
        }
        while (iNo != 0) {
            iSum = iSum + (iNo % 10);
            iNo = iNo / 10;

        }

        return iSum;
    }
}

class program129 {
    public static void main(String A[]) {

        Scanner scanner = new Scanner(System.in);
        int iRet = 0;
        Digit digit = new Digit();

        System.out.println("Enter Number : ");

        int iValue = scanner.nextInt();

        iRet = digit.SumDigits(iValue);

        System.out.println("Summation of digits : " + iRet);
    }
>>>>>>> 9c70aa53a1a4d84c47acc5bc1d39dad6805a7127:Java Programming/program129.java
}
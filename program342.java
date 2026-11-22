import java.util.Scanner;

class program342
{
    public static void main(String A[])
    {
        //  int arr[5] = {0};   // Not Allowed
        int arr[] = new int [5];

        int icnt = 0;
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter the elements : ");
        for(icnt = 0; icnt < arr.length; icnt++)
        {
            arr[icnt] = scanner.nextInt();
        }       

        System.out.println("Elements are : ");
        for(icnt = 0; icnt < arr.length; icnt++)
        {
            System.out.println(arr[icnt]);
        }
    }
}
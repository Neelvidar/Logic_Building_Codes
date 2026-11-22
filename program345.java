import java.util.Scanner;

class program345
{
    public static int Summation(int arr[])
    {
        int icnt = 0, isum = 0;

        for(icnt = 0; icnt < arr.length; icnt++)
        {
            isum = isum + arr[icnt];
        }

        return isum;
    }
    
    public static void main(String A[])
    {
        int icnt = 0, isize = 0, iret = 0;
        int ptr[] = null;
        Scanner scanner = null;

        scanner = new Scanner(System.in);

        System.out.println("Enter the number of elements :");
        isize = scanner.nextInt();  
        
        // step 1 : Allocate the memory
        ptr = new int[isize];

        // step 2 : Use the memory
        System.out.println("Enter the elements : ");
        for(icnt = 0; icnt < ptr.length; icnt++)
        {
            ptr[icnt] = scanner.nextInt();
        }       

        System.out.println("Elements are : ");
        for(icnt = 0; icnt < ptr.length; icnt++)
        {
            System.out.println(ptr[icnt]);
        }

        iret = Summation(ptr);

        System.out.println("Äddition is : "+iret);

        // step 3 : Deallocate the memory
        scanner = null;
        ptr = null;

        System.gc();
    }
}
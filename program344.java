import java.util.Scanner;

class program344
{
    public static void main(String A[])
    {
        int icnt = 0, isize = 0;
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

        // step 3 : Deallocate the memory
        scanner = null;
        ptr = null;

        System.gc();
    }
}
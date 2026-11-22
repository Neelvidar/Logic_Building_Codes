import java.util.Scanner;

class program346
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

    public static float Average(int arr[])
    {
        int icnt = 0, isum = 0;

        for(icnt = 0; icnt < arr.length; icnt++)
        {
            isum = isum + arr[icnt];
        }

        return ((float)isum / (float)arr.length);
    }
    
    public static void main(String A[])
    {
        int icnt = 0, isize = 0, iret = 0;
        float fret = 0.0f;
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
        System.out.println("Addition is : "+iret);

        fret = Average(ptr);
        System.out.println("Average is : "+fret);        

        // step 3 : Deallocate the memory
        scanner = null;
        ptr = null;

        System.gc();
    }
}
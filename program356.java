import java.util.Scanner;

class Number
{
    private int arr[];
    
    public Number(int isize)
    {
        arr = new int[isize];
    }

    public void Accept()
    {
        Scanner scanner = new Scanner(System.in);
        int icnt = 0;

        System.out.println("Enter the elements : ");
        for(icnt = 0; icnt < arr.length; icnt++)
        {
            arr[icnt] = scanner.nextInt();
        }
        
    }

    public void Display()
    {
        int icnt = 0;

        System.out.println("Elements of array are : ");
        for(icnt = 0; icnt < arr.length; icnt++)
        {            
            System.out.println(arr[icnt]);
        }
    }
}

class program356
{
    public static void main(String A[])
    {
        Number nobj1 = new Number(5);

        nobj1.Accept();
        nobj1.Display();

        nobj1 = null;
        System.gc();
    }
}
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

    public int Summation()
    {
        int icnt = 0, isum = 0;

        for(icnt = 0; icnt < arr.length; icnt++)
        {            
            isum = isum + arr[icnt];
        }        

        return isum;
    }

    public float Average()
    {
        int icnt = 0, isum = 0;

        for(icnt = 0; icnt < arr.length; icnt++)
        {            
            isum = isum + arr[icnt];
        }      

        return ((float)isum / (float)arr.length);
    }
}

class program357
{  
    
    public static void main(String A[])
    {
        Number nobj1 = new Number(5);
        int iret = 0;
        float fret = 0.0f;

        nobj1.Accept();
        nobj1.Display();

        iret = nobj1.Summation();
        System.out.println("Addition is : "+iret);

        fret = nobj1.Average();
        System.out.println("Average is : "+fret);

        nobj1 = null;
        System.gc();
    }
}
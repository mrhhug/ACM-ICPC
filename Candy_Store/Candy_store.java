import java.util.ArrayList;
import java.util.Scanner;

public class Candy_store {

    static double lowestPricedItem ;
    static double highetPricedItem ;
    static int numItems;
    static double cash;
    static int MaxNumberOfIndividualItems;
    static int HighestCalories;
    static double[][] matrix;
    static ArrayList<String> arList = new ArrayList<String>();
    
    public static void main(String[] args) {
        
        takeAllInput();
        
        String str = arList.remove(0);
        while(!"0 0.00".equals(str))
        {
            numItems = Integer.parseInt(str.substring(0, str.indexOf(" ")));
            cash = Double.parseDouble(str.substring(str.indexOf(" "),str.length()));
            runBruteForce();
            str = arList.remove(0);
        }              
    }
    public static void takeAllInput()
    {
        arList.add("2 8.00");
        arList.add("700 7.00");
        arList.add("199 2.00");
        arList.add("3 8.00");
        arList.add("700 7.00");
        arList.add("299 3.00");
        arList.add("499 5.00");
        arList.add("0 0.00");
        //Scanner scr = new Scanner(System.in);
        //String str ="go";
        //while(!"0 0.00".equals(str))
        //{
        //    str = scr.nextLine();
        //    arList.add(str);
        //}
    }
    public static void runBruteForce()
    {
        erectMatrix();
        HighestCalories=-1;
        while(ContinueBruteForce())
        {
            incramentMatrix();
            if(matrixCostCount()<=cash)
            {
                if(matrixCalCount()>HighestCalories)
                {
                    HighestCalories=matrixCalCount();
                }
            }    
        }
        System.out.println(HighestCalories);
    }
    public static int matrixCalCount()
    {
        int sum =0;
        for (int i=0;i<numItems;i++)
        {
            sum+=matrix[i][0]*matrix[i][2];
        }
        return sum;
    }
    public static double matrixCostCount()
    {
        double sum =0;
        for (int i=0;i<numItems;i++)
        {
            sum+=matrix[i][1]*matrix[i][2];
        }
        return sum;
    }
    public static void incramentMatrix()
    {
        matrix[0][2]=matrix[0][2]+1;
        for (int i =0;i<numItems;i++)
        {
            if(ContinueBruteForce()&&matrix[i][2]>MaxNumberOfIndividualItems)
            {
                matrix[i][2]=0;
                matrix[i+1][2]=matrix[i+1][2]+1;
            }            
        }
    }
    public static boolean ContinueBruteForce()
    {
        if (matrix [numItems-1][2]>=MaxNumberOfIndividualItems)
        {
            return false;
        }
        return true;
    }
    public static void erectMatrix()
    {
        matrix = new double[numItems][3];
        highetPricedItem = -1;
        lowestPricedItem = 101;
        for(int i=0;i<numItems;i++)
        {
            String str = arList.remove(0);
           
            matrix[i][0] = Integer.parseInt(str.substring(0, str.indexOf(" ")));
            matrix[i][1] = Double.parseDouble(str.substring(str.indexOf(" ")+1,str.length()));
            matrix[i][2] = 0;
            if(matrix[i][1]<lowestPricedItem)
            {
                lowestPricedItem=matrix[i][1];
            }
            if(matrix[i][1]>highetPricedItem)
            {
                highetPricedItem=matrix[i][1];
            }
        }
        MaxNumberOfIndividualItems = (int) Math.floor(cash/lowestPricedItem);
    }
}


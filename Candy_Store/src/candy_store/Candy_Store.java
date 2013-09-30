//package candy_store;

import java.util.ArrayList;
import java.util.Scanner;

public class Candy_Store {

    public static void main(String[] args) {
        
//        Scanner scn = new Scanner(System.in);
//        System.out.println("please Enter your input");
//        ArrayList<String> arList = new ArrayList<String>();
//        int totalnumberoflines;
//        int numItems;
//        double cash;
//        
////        while (true)
////        {
////            String str = scn.nextLine();
////            if(str.equals("0 0.00"))
////            {
////                break;
////            }
////            arList.add(str);
////        }
//        
//        arList.add("2 8.00");
//        arList.add("700 7.00");
//        arList.add("199 2.00");
//        arList.add("3 8.00");
//        arList.add("700 7.00");
//        arList.add("299 3.00");
//        arList.add("499 5.00");
//        arList.add("0 0.00");
//        
//        while(arList.size() >1)
//        {
//            String str = arList.remove(0);
//            numItems = Integer.parseInt(str.substring(0, str.indexOf(" ")));
//            cash = Double.parseDouble(str.substring(str.indexOf(" ")+1,str.length()));
//            double calories=0;
//            double[][] data = new double[numItems][2]; 
//            for (int i =0; i<numItems;i++)
//            {
//                str = arList.remove(0);
//                data [i][0] = Double.parseDouble(str.substring(0, str.indexOf(" ")));
//                data [i][1] = Double.parseDouble(str.substring(str.indexOf(" ")+1,str.length()));
//            }
//            double lowsetPricedSingleItem = 9999;
//            for (int i =0; i<numItems;i++)
//            {
//                if (data [i][1]<lowsetPricedSingleItem)
//                {
//                    lowsetPricedSingleItem=data [i][1];
//                }
//            }
//            while (cash >lowsetPricedSingleItem)
//            {
//                double currentLowPrice = 999999;
//                int min=999999;
//                for (int i =0; i<numItems;i++)
//                {
//                    if(data [i][0]/data [i][1]<currentLowPrice)
//                    {
//                        min = i;
//                        currentLowPrice =data [i][0]/data [i][1];
//                    }
//                }
//                //Integer.parseInt(str);             
//                double numberOfBars =Math.floor((cash / data [min][1]));
//                data [min][1] = 999999;
//                cash = cash - data [min][1]*numberOfBars;
//                calories = calories+(data [min][0]*numberOfBars);
//            }
//            System.out.println(calories);
//        }
//        System.out.println("good data");
//    }
        ArrayList<String> arList = new ArrayList<String>();
        arList.add("2 8.00");
        arList.add("700 7.00");
        arList.add("199 2.00");
        arList.add("3 8.00");
        arList.add("700 7.00");
        arList.add("299 3.00");
        arList.add("499 5.00");
        arList.add("0 0.00");
        
        String str = arList.remove(0);
        int numItems = Integer.parseInt(str.substring(0, str.indexOf(" ")));
        double cash = Double.parseDouble(str.substring(str.indexOf(" ")+1,str.length()));
        double[][] matrix = new double[numItems][2];
        double cheapestItem=101;
        int maxIterations;
        for (int i =0;i<numItems;i++)
        {
            str = arList.remove(0);
            matrix[i][0] = Integer.parseInt(str.substring(0, str.indexOf(" ")));
            matrix[i][1] = Double.parseDouble(str.substring(str.indexOf(" ")+1,str.length()));
            if(cheapestItem<matrix[i][1])
            {
                cheapestItem=matrix[i][1];
            }
        }
        maxIterations = 
        System.out.println("good data");
    }
}

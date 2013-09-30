/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package collision_detection;

import java.util.ArrayList;

/**
 *
 * @author michael
 */
public class Collision_Detection {

    static ArrayList<String> arList;
    static double[][] matrix;
    double accel0;
    double accel1;
    double distance0;
    double distance1;
    
    static double[][] massiveMatrix0;
    static double[][] massiveMatrix1;
    
    public static void main(String[] args)
    {
        takeInput();
        ParseInput();
        //calculateAccel();
        System.out.println("end proggie");
    }
    public static void takeInput()
    {
        arList = new ArrayList<String>();
        arList.add("10 0 0 10");
        arList.add("11 7.42 7.42 11");
        arList.add("11 41.0 106.0 16");
        arList.add("12 56 106 14");
    }
    public static void ParseInput()
    {
        matrix = new double[4][5];
        String str;
        for (int i =0; i<4;i++)
        {
            str = arList.remove(0);
            matrix[i][0] = 10*(Double.parseDouble(str.substring(0,str.indexOf(" "))));
            str=str.substring(str.indexOf(" ")+1, str.length());
            matrix[i][1] = 10*(Double.parseDouble(str.substring(0,str.indexOf(" "))));
            str=str.substring(str.indexOf(" ")+1, str.length());
            matrix[i][2] = 10*(Double.parseDouble(str.substring(0,str.indexOf(" "))));
            str=str.substring(str.indexOf(" ")+1, str.length());
            matrix[i][3] = 10*(Double.parseDouble(str.substring(0,str.length())));
        }
            
    }
    public static void calculateformula()
    {
        double accel1x = (matrix[0][0]-matrix[1][0]) /(matrix[0][3]-matrix[1][3]) ;
        double accel1y = (matrix[0][0]-matrix[1][0]) /(matrix[0][3]-matrix[1][3]) ;
        double accel2x = (matrix[2][0]-matrix[3][0]) /(matrix[2][3]-matrix[3][3]) ;
        double accel2y = (matrix[2][0]-matrix[3][0]) /(matrix[2][3]-matrix[3][3]) ;
        
    }
    public static void makeMassiveMatrixes()
    {
        massiveMatrix0 = new double[1200][5];
        massiveMatrix1 = new double[1200][5];
        //sets accelleration and calculates speed
        for(int i =0;i<60;i++)
        {
            massiveMatrix0[i][3]=matrix[1][3];
            massiveMatrix1[i][3]=matrix[2][3];
            
            massiveMatrix0[i][3]=matrix[1][3];
            massiveMatrix1[i][3]=matrix[2][3];
        }
    }
}

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package party_games;

import java.util.ArrayList;
import java.util.Collections;

public class Party_Games {

    static ArrayList<String> arList = new ArrayList<>();
    
    public static void main(String[] args) 
    {
        takeinput();
        sortarray();
        String name0= arList.get(arList.size()/2-1);
        String name1=arList.get(arList.size()/2);
        
        //for testing
        System.out.println(name0);
        System.out.println(name1);
        System.out.println("");
         
        
        
        int i =0;
        while (name0.charAt(i)==name1.charAt(i)&&i<name0.length()-1)
        {
            i++;
        }
        //System.out.println(name0.charAt(i));
        char mychar= name0.charAt(i);
        mychar++;
        System.out.println(name0.substring(0, i+1)+mychar);
        
    }
    
    public static void takeinput()
    {
        arList.add("FRED");
        arList.add("SAM");
        arList.add("JOE");
        arList.add("JOEY");
        arList.add("MARGARET");
        arList.add("ALEX");
        arList.add("PAUL");
        arList.add("SETH");
        arList.add("JIM");
    }
    public static void sortarray()
    {
        Collections.sort(arList);
    }
}

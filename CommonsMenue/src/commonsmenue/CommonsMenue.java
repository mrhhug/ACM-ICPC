package commonsmenue;

import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.lang.reflect.InvocationTargetException;
import java.util.Arrays;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

import org.mozilla.javascript.ScriptableObject;
import org.mozilla.javascript.Context;
import org.mozilla.javascript.Scriptable;
import org.mozilla.javascript.ScriptableObject;

/**
 *
 * @author CS Lab - Student
 * http://jrfom.com/2013/01/23/javascript-via-java-on-the-back-of-a-rhino/
 * http://jrfom.com/2013/01/23/javascript-via-java-on-the-back-of-a-rhino/
 */
public class CommonsMenue
{
    private static int numlines;
    
    public static void main(String[] args) throws FileNotFoundException, IOException, InvocationTargetException, InstantiationException, IllegalAccessException
    {
        String raw = readFile("C:/Users/CS Lab - Student/Documents/NetBeansProjects/CommonsMenue/menu.htm");
        String lineItemsString = readFileForItems("C:/Users/CS Lab - Student/Documents/NetBeansProjects/CommonsMenue/menu.htm");
        //print(getItems(lineItemsString));
        //System.out.println(raw);
        mathpatterns(raw);
    }
    
    public static String readFile(String file) throws IOException
    {
        BufferedReader br = new BufferedReader(new FileReader(file));
        StringBuilder str = new StringBuilder();
        String line = br.readLine();

        while (line != null)
        {
                str.append(line);
                str.append("\n");
               line = br.readLine();
        }
        return str.toString();
    }
    
    public static String readFileForItems(String file) throws IOException
    {
        BufferedReader br = new BufferedReader(new FileReader(file));
        StringBuilder str = new StringBuilder();
        String line = br.readLine();
        numlines = 0;
        while (line != null)
        {
            if(line.contains("=new Array"))
            {
                str.append(line);
                str.append("\n");
                numlines++;
            }
            line = br.readLine();
        }
        return str.toString();
    }
    
    public static String[][] getItems(String lineItemsString)
    {
        //String[] strarray = new String[numlines+1];
        String[][] strarray = new String[numlines][31];
        int row = 0,column =0;
        boolean semaphor=false;
        StringBuffer strBuffer = null;
        
        for (int i =0;i<lineItemsString.length();i++)
        {
            // check for escaped '
            if (lineItemsString.charAt(i)=='\'' && lineItemsString.charAt(i-1)!='\\')
            {
                if(!semaphor)
                {
                    semaphor=true;
                    strBuffer = new StringBuffer();
                }
                else
                {
                    semaphor=false;
                    strarray[row][column]=strBuffer.toString();
                    column++;
                }
            }
            else
            {
                if (lineItemsString.charAt(i)=='\n')
                {
                    column=0;
                    row++;
                }
                if(semaphor)
                {
                    strBuffer.append(lineItemsString.charAt(i));
                }
            }
        }
        return strarray;
    }
    
    static void print(String[][] strarray)
    {
        for(int i = 0; i < strarray.length; i++)
        {
            for(int j = 0; j < strarray[i].length; j++)
            {
                System.out.print("["+strarray[i][j]+"]");
                if(j < strarray[i].length - 1)
                {
                    //System.out.print(",");
                }
            }
            System.out.println();
        }
    }
    
    static void mathpatterns(String str)
    {
        System.out.println(str);
        String pattern1 = "BREAKFAST";
        String pattern2 = "LUNCH";
        String text = str;

        Pattern p = Pattern.compile(Pattern.quote(pattern1) + "(.*?)" + Pattern.quote(pattern2));
        //////
        //////
        //////
        //////stopped hereish
        //////
        //////
        //////
        //////
        Pattern p =(?<=!-- MONDAY)(.*)(?=TUESDAY);
        Matcher m = p.matcher(text);
        //System.out.print(m.toString());
        while (m.find())
        {
          System.out.println(m.group(0));
          System.out.println(m.group(1));

        }
        
        //System.out.println(regexString);
    }
//        File scriptFile = new File("C:/Menu.htm");
//        if (!scriptFile.exists())
//        {
//            System.err.println("Script file does not exist.");
//            System.exit(1);
//        }
//        
//        // Read in the JavaScript file.
//        byte[] buffer = new byte[512];
//        StringBuilder sb = new StringBuilder();
//        BufferedInputStream bis = new BufferedInputStream(new FileInputStream(scriptFile), 512);
//        int bytesRead = bis.read(buffer);
//        while (bytesRead != -1)
//        {
//            sb.append(new String(buffer));
//            bytesRead = bis.read(buffer);
//        }
//        String script = sb.toString();
//        
//        // Initialize the interpreter.
//        Context context = Context.enter();
//        context.setLanguageVersion(Context.VERSION_1_8);
//        Scriptable scope = context.initStandardObjects();
//        ScriptableObject.defineClass(scope, Foo.class);
//        
//        if (!context.stringIsCompilableUnit(script))
//        {
//            Context.exit();
//            System.err.println("Script is not compilable!");
//            System.exit(1);
//        }
//        
//        // Try to run the JavaScript through the interpreter
//        try 
//        {
//            context.evaluateString(scope, "C:/Menu.htm", "C:/Menu.htm", 1, null);
//            
//        }finally
//        {
//            Context.exit();
//        }
//    }
    
}

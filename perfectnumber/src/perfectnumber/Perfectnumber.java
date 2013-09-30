/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package perfectnumber;

/**
 *
 * @author michael
 */
public class Perfectnumber {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        for(int i =0;i<100001;i++)
        {
            if(perf(i))
                System.out.println(i);
        }
    }
    public static boolean perf(int n){
	int sum= 0;
	for(int i= 1;i < n;i++){
		if(n % i == 0){
			sum+= i;
		}
	}
	return sum == n;
}
}

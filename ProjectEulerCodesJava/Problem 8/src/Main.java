import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.io.FileInputStream;

public class Main {
	
	public static void main(String[] args) throws FileNotFoundException{
		
		Scanner sc = new Scanner(new File("input.txt"));
		String s = "";
		while(sc.hasNext()){
			s += sc.next();
		}

		int[] array = new int[s.length()];
		
		for(int i = 0; i < s.length(); i++){
			array[i] = Integer.parseInt(Character.toString(s.charAt(i)));
			//System.out.println(array[i]);
			//System.out.println(array.length);
		}
		
		int greatestprod = 1;
		int tempprod = 1;
		
		for(int j = 0; j <= 986; j++){
			for(int k = 0; k < 13; k++)
				tempprod *= array[j + k];
			if(tempprod > greatestprod)
				greatestprod = tempprod;
			tempprod = 1;
		}
		System.out.println(greatestprod);
		
		int testprod = 1;
		tempprod = 1;
		for(int j = 0; j <= 995; j++){
			for(int k = 0; k < 4; k++)
				tempprod *= array[j + k];
			if(tempprod > testprod)
				testprod = tempprod;
			tempprod = 1;
		}
		System.out.println(testprod);
	}
	
}

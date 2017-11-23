
public class Main {
	
	public static void main(String[] args){
		
		long sumOfSquares = 0;
		for(long i = 1; i <= 100; i++)
			sumOfSquares += i*i;
		long n = 100;
		long temp = (n * (n + 1))/2;
		long squareOfSum = temp * temp;
		System.out.println(squareOfSum - sumOfSquares);
	}
	
}

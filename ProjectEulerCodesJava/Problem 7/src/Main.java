
public class Main {

	public static void main(String[] args){
		
		int[] array = new int[10002];
		array[1] = 2;
		array[2] = 3;
		array[3] = 5;
		for(int i = 4; i <= 10001; i++){
			int num = array[i-1] + 1;
			while(true){
				int j = 1;
				boolean isPrime = true;
				while(array[j] < num/2){
					if(num % array[j] == 0){
						isPrime = false;
						break;
					}
					else
						j++;
				}
				if(isPrime){
					array[i] = num;
					break;
				}
				num++;
			}
		}
		
		System.out.println(array[10001]);
		
	}
	
}

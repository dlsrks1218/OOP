import java.util.Scanner;
public class ChangeMoney {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int don = sc.nextInt();
		int []arr = {50000, 10000, 1000, 100, 50, 10, 1};
		
		for(int i=0; i<arr.length; i++) {
			int a = don / arr[i];
			don = don % arr[i];
			System.out.println(arr[i]+"원권 "+a+"");
		}
		
	}
}

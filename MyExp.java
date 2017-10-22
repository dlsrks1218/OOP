import java.util.Scanner;
public class MyExp {
	int base;
	int exp;
	int getValue() {
		int res = 1;
		for(int i=0; i<exp; i++) {
			res = res * base;
		}
		return res;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		MyExp n1 = new MyExp();
		n1.base = sc.nextInt();
		n1.exp = sc.nextInt();
		System.out.println(n1.getValue());
	}
}

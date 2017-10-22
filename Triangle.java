import java.util.Scanner;
public class Triangle {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a, b, c;
		a = sc.nextInt();
		b = sc.nextInt();
		c = sc.nextInt();
		if(a+b>c && b+c>a && a+c>b) {
			System.out.println("삼각형 만들 수 있다");
		}
		else
			System.out.println("삼각형 만들 수 없다");
	}
}

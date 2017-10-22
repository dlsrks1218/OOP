import java.util.*;
public class Rectangle {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int x1 = sc.nextInt();
		int y1 = sc.nextInt();
		int x2 = sc.nextInt();
		int y2 = sc.nextInt();
		if(x1<50&&x2<50) {
			System.out.println("¾È°ãÄ§");
		}
		else if(x1>100&&x2>100) {
			System.out.println("¾È°ãÄ§");
		}
		else if(y1<50&&y2<50) {
			System.out.println("¾È°ãÄ§");
		}
		else if(y1>100&&y2>100) {
			System.out.println("¾È°ãÄ§");
		}
		else
			System.out.println("°ãÄ§");
	}
}

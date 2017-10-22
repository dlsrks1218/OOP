import java.util.*;
import java.util.concurrent.SynchronousQueue;
public class GoodsArray {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Goods[] ga = new Goods[3];
		for(int i=0; i<ga.length; i++) {
			String name = sc.next();
			int price = sc.nextInt();
			int nstock = sc.nextInt();
			int sold = sc.nextInt();
			ga[i] = new Goods(name, price, nstock, sold);
		}
		for(int i=0; i<ga.length; i++) {
			System.out.print(ga[i].getName()+ " ");
			System.out.print(ga[i].getPrice()+ " ");
			System.out.print(ga[i].getNumberOfStock()+ " ");
			System.out.println(ga[i].getSold());
		}
		
	}
}

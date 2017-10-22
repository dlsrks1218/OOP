
public class Goods {
	private String name;
	private int price;
	private int numberOfStock;
	private int sold;
	
	Goods(String n, int p, int ns, int s){
		name = n;
		price = p;
		numberOfStock = ns;
		sold = s;
	}
	String getName() {
		return name;
	}
	int getPrice() {
		return price;
	}
	int getNumberOfStock() {
		return numberOfStock;
	}
	int getSold() {
		return sold;
	}
}

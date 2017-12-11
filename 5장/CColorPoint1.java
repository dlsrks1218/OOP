package final1;
class Cpoint1{
	int x, y;
	Cpoint1(int x1, int y1){
		x = x1;
		y = y1;
	}
	void show(){
		System.out.print("("+x+","+y+")");
	}
	public String toString(){
		return ("("+x+","+y+") 입니다");
		
	}
}
public class CColorPoint1 extends Cpoint1 {
	String color;
	CColorPoint1(int a, int b, String c){
		super(a, b);
		color = c;
	}
	void show(){
		super.show();
		System.out.println(" "+color);
	}
	public static void main(String[] args){
		Cpoint1 a, b;
		a = new Cpoint1(2,3);
		b = new CColorPoint1(3,4, "red");
		a.show();
		System.out.println();
		b.show();
		System.out.println(a);
		System.out.println(b);
	}
}

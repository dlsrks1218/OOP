package final1;
class Point{
	int x, y;
	void set(int x, int y){
		this.x =x;
		this.y = y;
	}
	void showPoint(){
		System.out.println("("+x+","+y+")");
	}
}
public class ColorPoint extends Point{
	String color;
	void setColor(String c){
		this.color = c;
	}
	void showColorPoint(){
		System.out.print(color);
		//super.showPoint();
		showPoint();
	}
	public static void main(String[] args){
		ColorPoint cp = new ColorPoint();
		cp.set(3, 4);
		cp.setColor("red");
		cp.showColorPoint();
	}
}

package test1;
class Rect{
	int width, height;
	Rect(int w, int h){
		width = w;
		height = h;
	}
	public boolean equals(Rect b){
		if(this.width==b.width && this.height==b.height)
				return true;
		else
			return false;
	}
}
public class EqualsEx1 {
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Rect a = new Rect(2,3);
		Rect b = new Rect(2,3);
		Rect c = new Rect(3,4);
		if(a.equals(b))	System.out.println("a is equal to b");
		if(a.equals(c))	System.out.println("a is equal to c");
		if(b.equals(c))	System.out.println("b is equal to c");
	}

}

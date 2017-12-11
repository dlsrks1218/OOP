package test1;

public class MathEx {
	public static void main(String[] args){
		double a = -2.745874;
		System.out.println(Math.abs(a));
		System.out.println(Math.ceil(a));
		System.out.println(Math.floor(a));
		System.out.println(Math.sqrt(a));
		System.out.println(Math.exp(a));
		System.out.println(Math.rint(a));
		for(int i=0; i<5; i++){
			double x = Math.random()*100;
			int n = (int)x+1;
			System.out.println(n);
		}
	}
}

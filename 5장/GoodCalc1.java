package final1;
abstract class Calculator1{
	public abstract int add(int a, int b);
	public abstract int subtract(int a, int b);
	public abstract double average(int[] a);
}
public class GoodCalc1 extends Calculator1 {
	public int add(int a, int b){
		return a+b;
	}
	public int subtract(int a, int b){
		return a-b;
	}
	public double average(int[] a){
		double sum=0;
		for(int i=0; i<a.length; i++){
			sum+=a[i];
		}
		return sum/a.length;
	}
	public static void main(String[] args){
		int[] a1 = {1,2,3,4};
		Calculator1 g = new GoodCalc1();
		System.out.println(g.add(1, 2));
		System.out.println(g.subtract(2, 1));
		System.out.println(g.average(a1));
	}
}

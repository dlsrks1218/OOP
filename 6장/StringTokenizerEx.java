package test1;
import java.util.StringTokenizer;
public class StringTokenizerEx {
	public static void main(String[] args){
		StringTokenizer st = new StringTokenizer("장화/홍련/콩쥐/팥쥐", "/");
		while(st.hasMoreTokens()){
			System.out.println(st.nextToken());
		}
	}
}


public class ArrayUtility2Manager {
	public static void main(String[] args) {
		int[] s1 = {1,2,3,4,5};
		int[] s2 = {2,4,6};
		ArrayUtility2 at = new ArrayUtility2();
		int[] res1 = at.concat(s1, s2);
		int[] res2 = at.remove(s1, s2);
		for(int i=0; i<res1.length; i++) {
			System.out.print(res1[i]+" ");
		}
		System.out.println();
		for(int i=0; i<res2.length; i++) {
			System.out.print(res2[i]+" ");
		}
	}
}

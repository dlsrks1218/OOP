
public class ArrayUtility2{
	static int[] concat(int[] s1, int[] s2) {
		int[] con = new int[s1.length+s2.length];
		for(int i=0; i<con.length; i++) {
			if(i<s1.length) {
				con[i] = s1[i];
			}
			else {
				con[i] = s2[i-s1.length];
			}
		}		
		return con;
	}
	static int[] remove(int[] s1, int[] s2) {
		int len = s1.length;
		for(int i=0; i<len; i++) {
			for(int j=0; j<s2.length; j++) {
				if(s1[i] == s2[j]) {
					for(int k=i; k<s1.length-1; k++) {
						s1[k] = s1[k+1];
					}
					len--;
				}
			}
		}
		int[] rem = new int[len];
		for(int i=0; i<rem.length; i++) {
			rem[i] = s1[i];
		}
		return rem;
	}
}
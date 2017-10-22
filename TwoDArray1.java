import java.util.*;
public class TwoDArray1 {
	public static void main(String[] args) {
		Random rd = new Random();
		int[][] arr = new int[4][4];
		for(int k=0; k<8;) {
			int a = rd.nextInt(4);
			int b = rd.nextInt(4);
			int x = rd.nextInt(9)+1;
			if(arr[a][b]==0) {
				arr[a][b]=x;
				k++;
			}
		}
		for(int i=0; i<4; i++) {
			for(int j=0; j<4; j++) {
				System.out.print(arr[i][j]+" ");
			}
			System.out.println();
		}
	}
}

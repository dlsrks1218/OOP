import java.io.*;
public class CaseChanger {
	public static void main(String[] args) throws IOException {
		InputStreamReader rd = new InputStreamReader(System.in);
		int c = rd.read();
		if(c>='a' && c<='z') {
			c= c-32;
			System.out.println((char)c);
		}
		else if(c>='A' && c<='Z') {
			c = c+32;
			System.out.println((char)c);
		}
	}
}

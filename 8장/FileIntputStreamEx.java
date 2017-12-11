package test1;
import java.io.*;
public class FileIntputStreamEx {
	public static void main(String[] args) {
		FileInputStream fin = null;
		//InputStreamReader in = null;
		try {
			fin = new FileInputStream("c:\\windows\\system.ini");
			//in = new InputStreamReader(fin,"MS949");
			int c;
			while((c=fin.read())!=-1){
			//while((c=in.read())!=-1){	
				System.out.print((char)c);
			}
			fin.close();
			//in.close();
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}

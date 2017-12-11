package test1;
import java.util.*;
import java.io.*;
public class Append {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		String fname1, fname2;
		System.out.print("첫 번째 파일 이름 입력 : ");
		fname1 = sc.next();
		System.out.print("두 번째 파일 이름 입력 : ");
		fname2 = sc.next();
		
		File f1 = new File(fname1);
		File f2 = new File(fname2);
		File f3 = new File("c:\\tmp\\abc.txt");
		try {
			FileReader fr = null;
			FileReader fr1 = null;
			FileWriter fw = null;
			int c;
			int c1;
			fr = new FileReader(f1);
			fr1 = new FileReader(f2);
			fw = new FileWriter(f3);
			while((c=fr.read())!=-1){
				fw.write(c);
			}
			while((c=fr1.read())!=-1){
				fw.write(c);
			}
			fr.close();
			fw.close();
			fr1.close();
			} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		
	}
}

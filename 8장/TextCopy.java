package test1;
import java.io.*;
public class TextCopy {

	public static void main(String[] args) {
		File src = new File("c:\\tmp\\hangul.txt");
		File dst = new File("c:\\tmp\\test.txt");
		
		FileReader fr = null;
		FileWriter fw = null;
		BufferedReader br = null;
		BufferedWriter bw = null;
		
		try {
			fr = new FileReader(src);
			fw = new FileWriter(dst);
			br = new BufferedReader(fr);
			bw = new BufferedWriter(fw);
			
			int c;
			while((c=br.read())!=-1){
				bw.write(c);
			}
			br.close();
			bw.close();
			fr.close();
			fw.close();
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

}

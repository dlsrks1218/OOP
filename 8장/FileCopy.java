package test1;
import java.io.*;
public class FileCopy {

	public static void main(String[] args) {
		File f1 = new File("c:\\tmp\\a.jpg");
		File f2 = new File("c:\\tmp\\b.jpg");
		
		FileInputStream fi = null;
		FileOutputStream fo = null;
		BufferedInputStream br = null;
		BufferedOutputStream bw = null;
		
		try {
			fi = new FileInputStream(f1);
			fo = new FileOutputStream(f2);
			br = new BufferedInputStream(fi);
			bw = new BufferedOutputStream(fo, 1000);
			int c;
			while((c=br.read())!=-1){
				bw.write(c);
			}
			br.close();
			bw.close();
			fi.close();
			fo.close();
		} catch (FileNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

}

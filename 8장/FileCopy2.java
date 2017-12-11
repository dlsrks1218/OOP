package test1;

import java.io.*;

public class FileCopy2 {
	public static void main(String[] args) {
		
		int i = 1;
		
		File f1 = new File("c:\\tmp\\a.jpg");
		File f2 = new File("c:\\tmp\\b.jpg");
		
		FileInputStream fi = null;
		FileOutputStream fo = null;
		BufferedInputStream bi = null;
		BufferedOutputStream bo = null;
		
		try {
			fi = new FileInputStream(f1);
			fo = new FileOutputStream(f2);
			bi = new BufferedInputStream(fi);
			bo = new BufferedOutputStream(fo);
			
			int c;
			
			while( (c=bi.read()) != -1){
				bo.write(c);
				
				if(((f2.length()*100)/f1.length()) == i*10){
					System.out.println(10*i + "%완료");
					System.out.println("*");
					i++;
				}
			}
			System.out.println(10*i + "%완료");
			System.out.print("*");
			
			bo.close();
			fo.close();
			
			bi.close();
			fi.close();
			
		} catch (FileNotFoundException e) {
			System.out.println("?????");
		} catch (IOException e) {
			System.out.println("!!!!!!");
		}
		
	}

}

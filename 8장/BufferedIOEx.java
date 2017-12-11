package test1;
import java.io.*;

public class BufferedIOEx {

	public static void main(String[] args) {
		InputStreamReader in = new InputStreamReader(System.in);
		BufferedOutputStream out = new BufferedOutputStream(System.out, 20);	//20바이트 크기의 버퍼생성
		try {
			int c;
			while((c = in.read())!=-1){
				out.write(c);
			}
			out.flush();
			if(in!=null){
				in.close();
				out.close();
			}
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

}

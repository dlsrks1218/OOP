package test1;
import java.net.*;
import java.io.*;
public class URLConnectionReader {

	public static void main(String[] args) {
		try {
			URL aURL = new URL("http://www.nate.com");
			URLConnection uc = aURL.openConnection();
			BufferedReader in = new BufferedReader(
					new InputStreamReader(uc.getInputStream()));
			String inputLine;
			while( (inputLine=in.readLine()) != null ){
				System.out.println(inputLine);
			}
			in.close();
		} catch (MalformedURLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}

}

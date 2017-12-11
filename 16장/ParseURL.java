package test1;
import java.net.*;
public class ParseURL {
	public static void main(String[] args){
		URL opinion = null;
		URL homepage = null;
		try {
			homepage = new URL("http://news.hankooki.com:80");
			opinion = new URL(homepage, "opinion/editorial.htm");
		} catch (MalformedURLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		System.out.println("Protocol = "+opinion.getProtocol());
		System.out.println("host = "+opinion.getHost());
		System.out.println("filename = "+opinion.getFile());
		
	}
}

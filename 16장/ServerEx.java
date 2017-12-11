package test1;

import java.io.*;
import java.net.*;

public class ServerEx {
	public static void main(String[] args){
		try {
			BufferedReader in = null;
			BufferedReader stin = null;
			BufferedWriter out = null;
			ServerSocket listener = null;
			Socket socket = null;
			
			listener = new ServerSocket(9999);
			socket = listener.accept();
			in = new BufferedReader(new InputStreamReader(socket.getInputStream()));
			stin = new BufferedReader(new InputStreamReader(System.in));
			out = new BufferedWriter(new OutputStreamWriter(socket.getOutputStream()));
			String inputMessage;
			while(true){
				inputMessage = in.readLine();
				if(inputMessage.equalsIgnoreCase("bye"))
					break;
				System.out.println(inputMessage);
				String outputMessage = stin.readLine();
				out.write("서버>>"+outputMessage+"\n");
				out.flush();
			}
		} catch (IOException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}

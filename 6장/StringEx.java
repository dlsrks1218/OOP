package test1;

public class StringEx {

	public static void main(String[] args) {
		String a = new String(" abcd");
		String b = new String(",efg");
		
		System.out.println(a.concat(b));
		System.out.println(a.concat(b).trim());
		String c = a.concat(b).trim();
		System.out.println(c.replace("ab", "12"));
		String d = c.replace("ab", "12");
		String s[]=d.split(",");
		for(int i=0; i<s.length; i++){
			System.out.println("분리된 "+i+"번쨰 문자열 : "+s[i]);
		}
		String e = c.substring(3);
		System.out.println(e);
		char ch = e.charAt(2);
		System.out.println(ch);
	}

}

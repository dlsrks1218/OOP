package final1;
class Person2{
	String phone;
	public void setPhone(String phone){
		this.phone = phone;
	}
	public String getPhone(){
		return phone;
	}
}
class Professor1 extends Person2{
	public String getPhone(){
		return phone;
	}
}
public class Overriding1 {
	public static void main(String[] args){
		Professor1 p = new Professor1();
		p.setPhone("011-123-1234");
		System.out.println(p.getPhone());
		Person2 p1 = p;
		System.out.println(p1.getPhone());
	}
}

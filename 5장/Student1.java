package final1;
class Person{
	int age;
	public String name;
	protected int height;
	private int weight;
	void setWeight(int w){
		this.weight = w;
	}
	int getWeight(){
		return weight;
	}
	void showInfo(){
		System.out.println("이름 : "+age);
		System.out.println("키 : "+height);
		System.out.println("몸무게 : "+this.getWeight());
	}
}
public class Student1 extends Person{
	void set(){
		age = 25;
		name = "임종현";
		height = 166;
		setWeight(65);
	}
	public static void main(String[] args){
		Student1 s = new Student1();
		s.set();
		s.showInfo();
	}
}


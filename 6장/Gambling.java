package test1;
import java.util.*;
class Person{
	String name;
	int[] rand = new int[3];
	Person(String n){
		name = n;
	}
	void start(){
		Scanner sc1 = new Scanner(System.in);
		String flag = null;
		for(int i=0; i<3; i++){
			double d = Math.random()*3;//0~3난수발생
			int x = (int)Math.round(d);
			rand[i] = x;
		}
		while(true){
			System.out.println(name+"님 차례! >> Enter 입력하세요");
			for(int i=0; i<rand.length; i++){
				System.out.print(rand[i]+" ");
			}
			System.out.println();
			flag = sc1.nextLine();
			if(flag!=null){
				break;
			}
		}
	}
}
public class Gambling {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("겜블링 게임을 시작합니다!");
		System.out.print("Player 1의 이름을 입력하세요 : ");
		String aname = sc.next();
		System.out.print("Player 2의 이름을 입력하세요 : ");
		String bname = sc.next();
		Person a = new Person(aname);
		Person b = new Person(bname);
		while(true){
			a.start();
			b.start();
			if(a.rand[0]==a.rand[1]&&a.rand[1]==a.rand[2]){
				System.out.println(a.name+"님이 승리!");
				break;
			}
			else if(b.rand[0]==b.rand[1]&&b.rand[1]==b.rand[2]){
				System.out.println(b.name+"님이 승리!");
				break;
			}
	
		}
	}
}

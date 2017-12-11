//package final1;
//import java.util.*;
//abstract class DObject{
//	public void draw(){
//		System.out.println("DObject draw");
//	}
//}
//class Line extends DObject{
//	public void draw(){
//		System.out.println("Line");
//	}
//}
//class Rect extends DObject{
//	public void draw(){
//		System.out.println("Rect");
//	}
//}
//class Circle extends DObject{
//	public void draw(){
//		System.out.println("Circle");
//	}
//}
//public class MethodOverridingEx1 {
//	public static void main(String[] args){
//		DObject arr[] = new DObject[100];
//		Scanner sc = new Scanner(System.in);
//		int menu=0;
//		int menu1 = 0;
//		int cnt=0;
//		while(menu!=4){
//			System.out.print("삽입(1), 삭제(2), 모두 보기(3), 종료(4)>>");
//			menu = sc.nextInt();
//			switch(menu){
//			case 1:
//				System.out.print("도형종류 Line(1), Rect(2), Circle(3)>>");
//				menu1 = sc.nextInt();
//				if(menu1==1){
//					arr[cnt] = new Line();
//					cnt++;
//					System.out.println();
//					break;
//				}
//				else if(menu1==2){
//					arr[cnt] = new Rect();
//					cnt++;
//					System.out.println();
//					break;
//				}
//				else if(menu1==3){
//					arr[cnt] = new Circle();
//					cnt++;
//					System.out.println();
//					break;
//				}
//				else
//					break;
//			case 2:
//				if(cnt!=0){
////					for(int i=0; i<cnt-1; i++){
////						arr[i] = arr[i+1];
////					}
//					arr[cnt] = null;
//					cnt--;
//					System.out.println();
//					break;
//				}
//				else{
//					System.out.println("삭제할 도형없음");
//					break;
//				}
//			case 3:
//				System.out.println(cnt);
//				for(int i=0; i<cnt; i++){
//					arr[i].draw();
//				}
//				System.out.println();
//				break;
//			case 4:
//				System.out.println("종료합니다!");
//				System.exit(0);
//				break;
//			}
//		}
//	}
//}
//

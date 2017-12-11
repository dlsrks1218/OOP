package final1;
import java.util.*;
public class GraphicArray1 {
	Scanner sc = new Scanner(System.in);
	DObject3 arr[] = new DObject3[100];
	int menu1=0;
	int cnt=0;
	void add(){
		System.out.println("도형종류 Line(1), Rect(2), Circle(3)>>");
		menu1 = sc.nextInt();
		switch(menu1){
		case 1:
			arr[cnt++] = new Line3();
			break;
		case 2:
			arr[cnt++] = new Rect3();
			break;
		case 3:
			arr[cnt++] = new Circle3();
			break;
		}
	}
	void delete(){
		cnt--;
	}
	void showAll(){
		for(int i=0; i<cnt; i++){
			arr[i].draw();
		}
	}
}

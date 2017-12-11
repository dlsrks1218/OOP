package final1;
import java.util.*;

public class GraphicManager1 {
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int menu = 0;
		// TODO Auto-generated method stub
		GraphicArray1 ga = new GraphicArray1();
		while(menu!=4){
			System.out.println("Add (1), Delete (2), Show ALL (3), End (4)>> ");
			menu = sc.nextInt();
			
			switch(menu){
			case 1:
				ga.add();
				break;
			case 2:
				ga.delete();
				break;
			case 3:
				ga.showAll();
				break;
			case 4:
				System.exit(0);
				break;
			}
		}
	}

}

import java.util.Scanner;
public class Reserve {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int menu=0;
		int flag=0;
		SeatType[] st = new SeatType[3];
		//SeatType ��ü�迭 3�� ����
		for(int i=0; i<st.length; i++) {
	         st[i] = new SeatType();
	       //SeatType�迭 ��Ҹ��� 10��¥�� Seat��ü�迭 �����ϰ� �ʱ�ȭ��
	    }
		//SeatType ��ü�迭 �ʱ�ȭ
		while(true) {
			System.out.println("1.���� 2.��ȸ 3.��� 4.������");
			menu = sc.nextInt();
			switch(menu) {
			case 1:
				System.out.println("�¼� Ÿ���� �Է��ϼ��� 1.S 2.A 3.B");
			    int type = sc.nextInt();
				st[type-1].reserve();
				break;
			case 2:
				for(int i=0; i<st.length; i++) {
					st[i].confirm();
				}
				break;
			case 3:
				System.out.println("�����ϰ��� �ϴ� ������ �̸��� �Է��ϼ���");
				String dname = sc.next();
				for(int i=0; i<st.length; i++) {
					for(int j=0; j<st[0].s.length; j++) {
						if(dname.equals(st[i].s[j].name)) {
							st[i].cancel(dname);
							flag=1;
							//break;
						}
						else {
							flag=0;
						}
					}
					
				}
				if(flag==0) {
					System.out.println("���� �ش� �̸����� ���� ���� �����ϴ�");
					break;
				}
				break;
			case 4:
				System.out.println("���� ���α׷��� �����մϴ�!");
				System.exit(0);
				break;
			default:
				break;
			}
		}
	}
}

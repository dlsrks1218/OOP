import java.util.Scanner;
public class Reserve {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int menu=0;
		int flag=0;
		SeatType[] st = new SeatType[3];
		//SeatType 객체배열 3개 생성
		for(int i=0; i<st.length; i++) {
	         st[i] = new SeatType();
	       //SeatType배열 요소마다 10개짜리 Seat객체배열 생성하고 초기화함
	    }
		//SeatType 객체배열 초기화
		while(true) {
			System.out.println("1.예약 2.조회 3.취소 4.끝내기");
			menu = sc.nextInt();
			switch(menu) {
			case 1:
				System.out.println("좌석 타입을 입력하세요 1.S 2.A 3.B");
			    int type = sc.nextInt();
				st[type-1].reserve();
				break;
			case 2:
				for(int i=0; i<st.length; i++) {
					st[i].confirm();
				}
				break;
			case 3:
				System.out.println("삭제하고자 하는 예약자 이름을 입력하세요");
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
					System.out.println("현재 해당 이름으로 예약 건이 없습니다");
					break;
				}
				break;
			case 4:
				System.out.println("예약 프로그램을 종료합니다!");
				System.exit(0);
				break;
			default:
				break;
			}
		}
	}
}

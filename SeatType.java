import java.util.Scanner;
public class SeatType {
   Scanner sc = new Scanner(System.in);
   //int type;
   int i=0,  j=0;
   Seat[] s = new Seat[10];
   SeatType() {
	   for(j=0; j<s.length; j++) {
	       s[j] = new Seat();
	       s[j].name = "  ";
	   }
   }
   void reserve() {
      System.out.println("예약자 이름을 입력하세요");
      String rname = sc.next();
      System.out.println("좌석 번호를 입력하세요");
      int snum = sc.nextInt();
      for(int i=0; i<s.length; i++) {
    	  if((s[i].name).equals("  ")==false || (s[i].name).equals(rname)) {
    		  System.out.println("예약할 수 없는 좌석입니다");
        	  break;
          }
          else {
        	  s[snum-1].name = rname;
              System.out.println(rname+"님 좌석 예약 완료");
              break;
          }
      }
      
   }
   void confirm() {
	   System.out.print(s[0].getName());
	   for(int j=1; j<10; j++) {
           System.out.print(" -- "+s[j].getName());
        }
	   System.out.println();
   }
   void cancel(String dna) {
	   for(i=0; i<s.length; i++) {
		   if(dna.equals(s[i].name)) {
			   s[i].name = "  ";
			   System.out.println("예약취소 완료");
			   break;
		   }
	   }
	   
   }
	   
}
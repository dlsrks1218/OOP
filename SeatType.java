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
      System.out.println("������ �̸��� �Է��ϼ���");
      String rname = sc.next();
      System.out.println("�¼� ��ȣ�� �Է��ϼ���");
      int snum = sc.nextInt();
      for(int i=0; i<s.length; i++) {
    	  if((s[i].name).equals("  ")==false || (s[i].name).equals(rname)) {
    		  System.out.println("������ �� ���� �¼��Դϴ�");
        	  break;
          }
          else {
        	  s[snum-1].name = rname;
              System.out.println(rname+"�� �¼� ���� �Ϸ�");
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
			   System.out.println("������� �Ϸ�");
			   break;
		   }
	   }
	   
   }
	   
}
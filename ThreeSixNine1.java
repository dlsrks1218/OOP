
public class ThreeSixNine1 {
	public static void main(String[] args) {
		for(int i=0; i<10; i++) {
			for(int j=0; j<10; j++) {
				if(i==0) {
					if(j!=0 && j%3==0) {
						System.out.println(j+" �ڼ� �ѹ�");
					}
				}
				else if(i!=0) {
					if(j==0) {
						if(i%3==0) {
							System.out.println(i+""+j+" �ڼ� �ѹ�");
						}
					}
					else if(j!=0) {
						if(i%3==0 || j%3==0) {
							System.out.println(i+""+j+" �ڼ� �ѹ�");
							if(i%3==0 && j%3==0) {
								System.out.println(i+""+j+" !�ڼ� �ι�!");
							}
						}
					}
				}
			}
		}
	}
}

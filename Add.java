public class Add {
	public static void main(String[] args) {
		int sum=0; 
		for(int i=0; i<args.length; i++) {
			try {
				int n = Integer.parseInt(args[i]);
				sum += n;
			} catch (NumberFormatException e) {
				// TODO Auto-generated catch block
				//e.printStackTrace();
				System.out.println(args[i] + "은(는) 정수형인자가 아닙니다");
			}
		}
		System.out.println("sum = " + sum);
	}
}

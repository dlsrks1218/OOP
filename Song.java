
public class Song {
	String title;
	String artist;
	String album;
	String[] composer;
	int year;
	int track;
	Song(){
		
	}
	Song(String tit, String art, String alb, String[] com, int y, int t){
		title = tit;
		artist = art;
		album = alb; 
		composer = com;
		year = y;
		track = t;
	}
	void Show() {
		System.out.println("���� : "+title);
		System.out.println("���� : "+artist);
		System.out.print("�۰ : ");
		for(int i=0; i<composer.length; i++) {
			System.out.print(composer[i]+ " ");
		}
		System.out.println();
	}
}


import java.util.Scanner;
public class A_Shortest_Path_with_Obstacle{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt(), v=0;
        while(v<n){
            int x1 = scan.nextInt(), y1= scan.nextInt(), x2 = scan.nextInt(), y2 = scan.nextInt(), xf = scan.nextInt(), yf = scan.nextInt();
            int maxx = Math.max(x1,x2), maxy= Math.max(y1,y2);
            int minx = Math.min(x1,x2), miny =Math.min(y1,y2);

            if(((x1==xf && x2==xf)&&(miny<=yf&&maxy>=yf))||(y1==yf&&y2==yf)&&(minx<=xf&&maxx>=xf)){
              
                int m = Math.abs(x1-x2)+Math.abs(y1-y2)+2;
                System.out.println(m);
            }
            else{
                int m = Math.abs(x1-x2)+Math.abs(y1-y2);
                System.out.println(m);
            }
            v++;
        }
        scan.close();
    }
}
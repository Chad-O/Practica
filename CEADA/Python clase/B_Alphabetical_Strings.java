import java.util.Scanner;
public class B_Alphabetical_Strings{
    public static boolean alpha(String m,int p1, int p2, int p3){
        String a = "abcdefghijklmnopqrstuvwxyz";
        if(m.indexOf(a.charAt(p1))!= -1){
            p2 = m.charAt(a.charAt(p1));
            p1++;
            
            if(m.charAt(p2+1) == a.charAt(p1)){
                p3 = p2+1;
                alpha(m,p1,p2,p3);
                if((p3-p2+1)== m.length()){
                    return true;
                }
            }else if(m.charAt(p2-1) == a.charAt(p1)){
                p3 = p2-1;
                alpha(m,p1,p2,p3);
                if((p3-p2+1)== m.length()){
                    return true;
                }
            }
        }
        return false;
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt(), v =0;
        boolean z = true;
        int p1=0, p2= 0, p3 =0;
        while(v<n){
            String m = scan.next();
            z = alpha(m,p1,p2,p3);
            if(z==true){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
            v++;
        }
        scan.close();
    }
}
import java.util.Scanner;
public class N {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt(),v =0,n=0;
        String ini = scan.next();
        String ini1 = ini.substring(1,ini.length());
        float sum = Float.parseFloat(ini1);
        while(v<t){
            String m = scan.next();
            String m1 = m.substring(1, m.length());
            float num = Float.parseFloat(m1);
            sum += num;
            if(sum %1 != 0){
                n++;
            }
            v++;
        }
        System.out.println(n);
        scan.close();
    }
}
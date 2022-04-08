import java.util.Scanner;
public class WeirdJava{
    public static long raro(long n){
        System.out.print(n+ " ");
        while (n != 1){
            if(n%2 == 0){
                //System.out.print(n/2+ " ");
                return raro(n/2);
            }
            else if(n % 2!=0){
                //System.out.print((n*3+1)+" ");
                return raro(n*3+1);
            }
        }
        return 1;
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        long n = scan.nextInt();
        raro(n);
        scan.close();
    }
}
import java.util.Scanner;
public class even {
    public static void main(String[] args) {
        int n = 0;
        Scanner scan = new Scanner(System.in);
        n = scan.nextInt();
        if(n%2==0&&n>=1&&n<=100){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
        scan.close();
    }
}

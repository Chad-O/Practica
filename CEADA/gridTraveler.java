import java.util.Scanner;
public class gridTraveler {
    public static long[][] memo = new long[10000][10000];
    public static long gridTravel(int m, int n){
        if(m == 1 && n == 1){
            return 1;
        }
        else if(m == 0 || n == 0){
            return 0;
        }else{
        long rsp = gridTravel(m-1,n) + gridTravel(m, n-1);
        memo[m][n] = rsp;
        return rsp;
        }
    }    
    
    public static void main(String[] args) {
        Scanner scan  = new Scanner(System.in);
        int m = scan.nextInt();
        int n = scan.nextInt();
        scan.close();
        long f = gridTravel(m, n);
        System.out.print(m +" & "+ n+" Total de iteraciones: "+f);
    }
}

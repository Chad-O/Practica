import java.util.Scanner;

public class C {
    public static int cant(int[] arr, int alt, int t){
        int n = 0;
        if(arr[t-1]<alt){
            n = t;
            return n;
        }
        for(int i = 1; i < arr.length; i++){
            if(arr[i]-arr[i-1]<=alt){
                n++;
            }
        }
        if(alt == 0){
            for(int i = 1; i<arr.length;i++){
                if(arr[i]==arr[i-1]){
                    n+=2;
                }
            }
        }
        return n;
    }
    public static void main(String[] args) {
        int t = 0, v = 0, alt = 0;
        Scanner scan = new Scanner(System.in);
        t = scan.nextInt();
        alt = scan.nextInt();
        int[] arr = new int[t];
        while(v<t){
            arr[v] = scan.nextInt();
            v++;
        }
        int n = cant(arr,alt,t);
        System.out.println(n);
        scan.close();
    }
}
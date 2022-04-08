import java.util.Scanner;
public class A {
    public static void main(String[] args) {
        int t = 0, v = 0;
        Scanner scan = new Scanner(System.in);
        t = scan.nextInt();
        int[] arr = new int[t];
        while(v<t){
            arr[v] = scan.nextInt();
            v++;
        }
        if(arr.length<4){
            System.out.println("N");
        }else{
            int sum = 0 , max = 0;
            for(int i = 0; i<arr.length; i++){
                if(arr[i]>max){
                    max = arr[i];
                }
                sum += arr[i];
            }
            if(sum%max==0){
                System.out.println("Y");
            }else{
                System.out.println("N");
            }
        }
        scan.close();
    }
}

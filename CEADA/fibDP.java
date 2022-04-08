
public class fibDP {
    public static long fibArray[] = new long[100];
    public static long fib(int n){
        long fibo = 0;
        if(n==0 || n==1){
            return 1;
        }
        else if(fibArray[(int)n]!=0){ 
            return fibArray[(int)n];
        }else{
        fibo = fib(n-1)+fib(n-2);
        fibArray[(int)n] = fibo;
        return fibo;
        }
    }
    
    public static void main(String[] args) {
        for(int i = 0; i<100;i++){
            long f = fib(i);

            System.out.println("fib "+i+": "+f);
        }
    }
}

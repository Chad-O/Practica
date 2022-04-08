import java.util.*;
class LIS {
    public static int lis(int arr[], int n)
    {
        int lis[] = new int[n];
        int max = 0;
        /*Inicialiar el array con los valores 1*/
        for (int i = 0; i < n; i++)
            lis[i] = 1;
        /* Algoritmo del bottom up */
        for (int i = 1; i < n; i++)
            for (int j = 0; j < i; j++)
                if (arr[i] > arr[j] && lis[i] < lis[j] + 1)
                    lis[i] = lis[j] + 1;
        /* Elección del valor más alto dentro del array trabajado por el bottom 
        up*/
        for (int i = 0; i < n; i++)
            if (max < lis[i])
                max = lis[i];
        return max;
    }
    public static void main(String args[])
    {
        int v = 0;
        Scanner scan = new Scanner(System.in);
        System.out.println("Ingresar tamaño del array y valores:");
        v = scan.nextInt();
        int[] arr = new int[v];
        
        for(int i = 0; i<arr.length;i++){
            arr[i] = scan.nextInt();
        }
        //Inicializar tiempo transcurrido
        long inicio = System.nanoTime();
        System.out.println("Longitud de la subsecuencia más larga: " + 
                lis(arr, v) + "\n");     
        //Finalizar y retornar tiempo transcurrido
        long fin = System.nanoTime();
        System.out.println("Tiempo utilizado: " +(fin-inicio));
        scan.close();
    }
}
import java.util.*;
class Dist {
static int printCountDP(int dist)
{
        int []ways = new int[3];
        int n = dist;         
        // Inicializar los casos base
        ways[0] = 1;
        ways[1] = 1;
        ways[2] = 2;
        //Loop que permite tomar los valores necesarios
        for(int i=3 ;i<=n ;i++)
            ways[i%3] = ways[(i-1)%3] + ways[(i-2)%3] + ways[(i-3)%3];
            
        return ways[n%3];
}
/*
Para la prueba utilizamos valores de i hasta de esta forma se puede visualizar
la progresión.
*/
public static void main(String arg[]){
    Scanner scan = new Scanner(System.in);
    System.out.println("Ingrese la distancia a recorrer");
    int d = scan.nextInt();
    for(int i = 0; i<=d;i++){
        //Inicializar tiempo transcurrido
        long inicio = System.nanoTime();
        System.out.print("Valor "+i+" "+printCountDP(i)+"\n");
        //Finalizar y print tiempo transcurrido
        long fin = System.nanoTime();
        System.out.println("Tiempo para "+i+": " +(fin-inicio));
        scan.close();
        }
    }
}
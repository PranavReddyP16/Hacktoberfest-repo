import java.util.*;
import java.math.*;

public class powersOfTwo{
    public static void main(String[] args){
        long n;
        int k;
        Scanner sc = new Scanner(System.in);
        n=sc.nextLong();
        k=sc.nextInt();
        int[] arr = new int[k];
        Arrays.fill(arr, 0, k, 1);
        int sum = k;
        for(int i = k-1;i>=0;i--){
            while(sum+arr[i]<=n){
                sum+=arr[i];
                arr[i]*=2;
            }
        }
        if(sum==n){
            System.out.println("YES");
            for(int i=0;i<k;i++) System.out.print(arr[i]+" ");
        }
        else System.out.println("NO");
    }
}
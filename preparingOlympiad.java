import java.util.*;
import java.math.*;
import java.io.*;

public class preparingOlympiad{
    public static void main(String[] args){
        int n;
        long l,r,x;
        Scanner sc = new Scanner(System.in);
        n=sc.nextInt();
        l=sc.nextLong();
        r=sc.nextLong();
        x=sc.nextLong();
        long[] arr = new long[n];
        for(int i=0;i<n;i++)arr[i]=sc.nextLong();
        int limit = (1<<n) - 1;
        long ans=0;
        for(int i=1;i<=limit;i++){
            int index=n-1;
            int temp=i;
            long sum=0;
            long min= Long.MAX_VALUE;
            long max=0;
            while(temp>0){
                if((temp%2)!=0){
                    sum+=arr[index];
                    if(arr[index]>max)max=arr[index];
                    if(arr[index]<min)min=arr[index];
                }
                index-=1;
                temp>>=1;
            }
            if((l<=sum) && (sum<=r) && (max-min >= x)) ans+=1;
        }
        System.out.println(ans);
    }
}
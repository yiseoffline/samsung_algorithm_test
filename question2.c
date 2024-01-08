#include <stdio.h>

int main(void){
    int t,n;
    int arr[50][3];
    scanf("%d\n",&t);
    for(int i=0; i<t; i++){
        scanf("%d\n",&n);
        int max_arr[n];
        int sum[n];
        int res_arr[t];

        if(n<3){
            res_arr[i]=-1;
            continue;
        }

        for(int j=0; j<n; j++){
            scanf("%d %d %d\n",&arr[j][0], &arr[j][1],&arr[j][2]);
            int max=arr[j][0];
            sum[j]=arr[j][0] + arr[j][1] + arr[j][2];

            for(int k=1; k<n; k++){
                if(max<=arr[j][k]){
                    max=arr[j][k];
                }
                max_arr[j]=max;
            }

            int res = sum[j]-max_arr[j];
            res_arr[i]+=res;
        }
        printf("#%d - %d\n",i+1, res_arr[i]);
    }
    
}

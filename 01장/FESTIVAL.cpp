#include <stdio.h>
#include <stdlib.h>

int main(){
    int testcase;
    scanf("%d", &testcase);

    for(int t=0; t<testcase; t++){
        int n, l;
        double best = 100001.0;
        scanf("%d %d", &n, &l);
        int* arr = (int*)malloc(sizeof(int)*n);
        for(int i=0; i<n; i++) scanf("%d", &arr[i]);

        for(int i=l; i<=n; i++){
            int tmp = 0, localmin = 0;

            for(int j=0; j<i; j++) tmp += arr[j];
            localmin = tmp;

            for(int j=i; j<n; j++){
                tmp+=(arr[j] - arr[j-i]);
                if(localmin > tmp) localmin = tmp;
            }

            if(best > localmin / (double)i) best = localmin / (double)i;
        }

        printf("%.11f\n", (double)best);

        free(arr);
    }

    return 0;
}
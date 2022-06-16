#include <stdio.h>
int main()
{
    int N, i, j, Q, arr[100000], sum = 0;

    scanf("%d", &N);

    for(int k = 0; k < N; k++){
        scanf("%d", &arr[k]);
    }

    scanf("%d", &Q);
    for(int k = 0; k < Q; k++){
        scanf("%d %d", &i, &j);
        while(i <= j){
            sum += arr[i];
            i++;
        }
        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}

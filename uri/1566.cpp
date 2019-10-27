#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio();
    cin.tie(NULL);
    cout.tie(NULL);
    int q, n, x;
    scanf("%d", &q);
    int arr[231];
    while(q--){
        memset(arr, 0, sizeof arr);
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            scanf("%d", &x);
            arr[x]++;
        }
        int cont = 0;
        for(int i = 20; i <= 230; i++){
            while(arr[i]--){
                cont++;
                printf("%d", i);
                if(cont < n) printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
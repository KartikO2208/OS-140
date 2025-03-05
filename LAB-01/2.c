#include <stdio.h>
int arr[1000][1000]; 
int diag[200000] ; 
int max = (1<<30) ; 
int main(){ 
    int n , m  ; 
    scanf("%d%d",&n,&m) ; 
    for(int i = 0 ; i<m ; ++i){
        for(int j = 0 ; j<n ; ++j){
            scanf("%d",&arr[i][j])  ; 
        }
    }
    for(int i = 0 ; i<=(n-1+m-1) ; ++i){
        diag[i] = 0; 
    }
    
    for(int i = 0 ; i<m ; ++i){
        for(int j = 0 ; j<n ; ++j){
            diag[j-i+m-1]+= arr[i][j] ; 
        }
    }
    for(int i = 0 ; i<=n-1+m-1; ++i){
        printf("%d ",diag[i]) ; 
    }
    return 0 ; 
}

#include <stdio.h>
int fact(int x);

int main(){
  int x ;
  scanf("%d", &x);
  fact(x);

}


int fact(int x){
    int count, fact_count = 1;
    if(x > 0){
        int i;
        for(i = 1;i <= x; i++){
            count = i;
            fact_count *= count;

        }
        
    }
    return fact_count;
}
#include <cstdio>

int main(){
    double min, ages[5];

    for(int i = 0; i < 5; i++){
        scanf("%lf", &ages[i]);
    }
    min = ages[0];

    for(int i = 1; i < 5; i++){
        if(ages[i] < min){
            min = ages[i];
        }
    }

    printf("%.1lf", 50-((min / 100) * 50));
}

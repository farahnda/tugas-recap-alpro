#include<stdio.h>

int main(){
    int jarak1;
    int waktu1;
    int kecepatan1;
    int waktu2;
    int jarak2;
    int kecepatan2;

    scanf("%d", &jarak1);
    scanf("%d", &waktu1);
    scanf("%d", &kecepatan1);
    scanf("%d", &waktu2);
    scanf("%d", &jarak2);
    scanf("%d", &kecepatan2);

    float V = (float) jarak1 / waktu1;
    float S = (float) kecepatan1 * waktu2;
    float T = (float) jarak2 / kecepatan2;

    printf("%.2f\n", V);
    printf("%.2f\n", S);
    printf("%.2f\n", T);

    return 0;

}
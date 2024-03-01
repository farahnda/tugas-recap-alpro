#include<stdio.h>

int main(){

    int JumlahElemen, Hasil;

    scanf("%d", &JumlahElemen);

    int array[JumlahElemen];

    
    for (int i = 0; i < JumlahElemen; ++i) {
        scanf("%d", &array[i]);
        Hasil += array[i];
    }

    printf("%d\n", Hasil);

    return 0;
}
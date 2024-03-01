#include<stdio.h>

int main() {
    int JumlahTransaksi, NominalTransaksi, TotalPengeluaran = 0;

    scanf("%d", &JumlahTransaksi);

    if (JumlahTransaksi <= 0) {
        printf("Tidak ada transaksi hari ini\n");
        return 0;
    }

        for (int i = 0; i < JumlahTransaksi; ++i) {
            scanf("%d", &NominalTransaksi);
            TotalPengeluaran += NominalTransaksi;
        }

    printf("%d\n", TotalPengeluaran);

    return 0;
}

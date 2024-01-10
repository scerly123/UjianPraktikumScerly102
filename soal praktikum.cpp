#include <iostream>
#include <algorithm>

int main() {
    // Deret sebelum di sorting
    short deret[] = { 87, 45, 50, 25, 32, 10, 75, 90, 5, 8 };
    int panjangDeret = sizeof(deret) / sizeof(deret[0]);

    std::cout << "Deret sebelum di sorting: ";
    for (int i = 0; i < panjangDeret; ++i) {
        std::cout << deret[i] << " ";
    }

    // Sorting deret
    std::sort(deret, deret + panjangDeret);

    // Deret setelah di sorting
    std::cout << "\nDeret setelah di sorting: ";
    for (int i = 0; i < panjangDeret; ++i) {
        std::cout << deret[i] << " ";
    }

    // Menghitung nilai median
    float median;
    if (panjangDeret % 2 == 0) {
        median = (deret[panjangDeret / 2 - 1] + deret[panjangDeret / 2]) / 2.0;
    }
    else {
        median = deret[panjangDeret / 2];
    }

    std::cout << "\nNilai median: " << median << std::endl;

   
}

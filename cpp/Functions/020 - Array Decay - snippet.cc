#include <iostream>

// Exact match works as expected.
void f(int mat[2][2][3]) {
    std::cout << mat[1][0][0] << std::endl; // 7
}

// Inexact match on 1st dimension still works due to decay!
void g(int mat[1][2][3]) {
    std::cout << mat[1][0][0] << std::endl; // 7
}

// Inexact match on any but 1st arg is not allowed!
void h(int mat[2][1][3]) {
    std::cout << mat[1][0][0] << std::endl;
}

// This is a more honest way to say it.
// Since the compiler doesn't care about the 1st dimension,
// just don't include it!
// It has decayed away.
void i(int mat[][2][3]) {
    std::cout << mat[1][0][0] << std::endl; // 7
}

// If you pass in a definitive array to the next function,
// another layer decays away.
void j(int mat[][3]) {
}

void k(int mat[][2][3]) {
    j(mat[0]);
}

void mutate(int mat[][2][3]) {
    mat[0][0][0] = 100;
}

int main() {
    int mat[2][2][3] = {{{1, 2, 3}, {4, 5, 6}}, {{7, 8, 9}, {10, 11, 12}}};

    f(mat);
    g(mat);
    // h(mat); // ILLEGAL
    i(mat);
    k(mat);

    // These are not allowed!
    // int ***p = mat;
    // int q[2][2][3] = mat;

    mutate(mat);
    std::cout << mat[0][0][0] << std::endl; // 100
    
    return 0;
}
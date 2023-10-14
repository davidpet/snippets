Sure, here is a code snippet demonstrating the usage of Eigen library in C++:

// Include the Eigen library
#include <Eigen/Dense>
#include <iostream>

int main()
{
    // Create a 3x3 matrix of integers
    Eigen::Matrix3i mat3i;
    mat3i << 1, 2, 3,
             4, 5, 6,
             7, 8, 9;
    std::cout << "3x3 Matrix:\n" << mat3i << std::endl; // Prints the 3x3 matrix

    // Create a dynamic size matrix and vector
    Eigen::MatrixXd matXd(2,2);
    matXd << 10, 11,
             12, 13;
    Eigen::VectorXd vecXd(2);
    vecXd << 14, 15;
    std::cout << "Dynamic size matrix:\n" << matXd << std::endl; // Prints the dynamic size matrix
    std::cout << "Dynamic size vector:\n" << vecXd << std::endl; // Prints the dynamic size vector

    // Perform matrix and vector operations
    Eigen::MatrixXd result = matXd * vecXd;
    std::cout << "Result of multiplication:\n" << result << std::endl; // Prints the result of multiplication

    // Solve linear equations
    Eigen::VectorXd solution = matXd.colPivHouseholderQr().solve(vecXd);
    std::cout << "Solution of linear equations:\n" << solution << std::endl; // Prints the solution of linear equations

    return 0;
}
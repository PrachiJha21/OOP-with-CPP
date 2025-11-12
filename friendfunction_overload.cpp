// NOT FOR LABS
#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[3][3]; // Using fixed 3x3 matrix for simplicity
    int rows, cols;

public:
    // Constructor
    Matrix(int r = 3, int c = 3) : rows(r), cols(c) {
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                mat[i][j] = 0;
            }
        }
    }

    // Function to input matrix
    void input() {
        cout << "Enter matrix elements (" << rows << "x" << cols << "):\n";
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                cin >> mat[i][j];
            }
        }
    }

    // Function to display matrix
    void display() {
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                cout << mat[i][j] << "\t";
            }
            cout << endl;
        }
    }

    // Friend function declaration for addition
    friend Matrix operator+(Matrix m1, Matrix m2);
};

// Friend function implementation
Matrix operator+(Matrix m1, Matrix m2) {
    Matrix result(m1.rows, m1.cols);
    
    for(int i = 0; i < m1.rows; i++) {
        for(int j = 0; j < m1.cols; j++) {
            result.mat[i][j] = m1.mat[i][j] + m2.mat[i][j];
        }
    }
    
    return result;
}

int main() {
    Matrix m1, m2, m3;
    
    cout << "Enter first matrix:\n";
    m1.input();
    
    cout << "Enter second matrix:\n";
    m2.input();
    
    // Using overloaded + operator
    m3 = m1 + m2;
    
    cout << "\nSum of Matrices:\n";
    m3.display();
    
    return 0;
}

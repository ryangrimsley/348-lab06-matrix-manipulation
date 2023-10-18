#include <iostream>
#include <fstream>
#include <string>

using namespace std;



int main(){

    string file_name;
    cout << "Enter file name: ";
    cin >> file_name;

    fstream my_file;
    my_file.open(file_name, ios::in);

    if (!my_file){
        cout << "No such file" << endl;
    } else {
        int mat1[100][100];
        int matrix_size;
        my_file >> matrix_size;
        for(int i = 0; i < matrix_size; ++i) {
            for(int j = 0; j < matrix_size; ++j) {
                my_file >> mat1[i][j];
            }
        }

        int mat2[100][100];
        // vector<<vector<int>> mat3(matrix_size, <vector<int>(matrix_size));
        // matrix.emplace_back();
        for(int i = 0; i < matrix_size; ++i) {
            for(int j = 0; j < matrix_size; ++j) {
                my_file >> mat2[i][j];
            }
        }
        cout << "Ryan Grimsley" << endl << "Lab 6 Matrix Manipulation" << endl;
        
        //for loop to calculate the sum matrix
        int added_mat[100][100];
        for (int i = 0;i < matrix_size;++i){
            for (int j = 0;j < matrix_size;++j){
                added_mat[i][j] = mat1[i][j] + mat2[i][j];
            }
        }
        //for loop to calculate the product matrix
        int product_mat[100][100];
        for (int i = 0;i < matrix_size;++i){
            for (int j = 0;j < matrix_size;++j){
                for(int k = 0; k < matrix_size; ++k){
                    product_mat[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }

        //for loop to calculate the subtraction matrix (A-B)
        int difference_mat[100][100];
        for (int i = 0;i < matrix_size;++i){
            for (int j = 0;j < matrix_size;++j){
                difference_mat[i][j] = mat1[i][j] - mat2[i][j];
            }
        }

        // for loop to print matrix a
        cout << "Matrix A: " << endl;
        for (int i =0;i<matrix_size;i++){
            for (int j=0;j<matrix_size;j++){
                cout << " " << mat1[i][j];
                }
            cout << endl;
        }

        // for loop to print matrix b
        cout << "Matrix B: " << endl;
        for (int i =0;i<matrix_size;i++){
            for (int j=0;j<matrix_size;j++){
                cout << " " << mat2[i][j];
                }
            cout << endl;
        }

        // for loop to print the sum matrix
        cout << "Matrix Sum (A+B): " << endl;
        for (int i =0;i<matrix_size;i++){
            for (int j=0;j<matrix_size;j++){
                cout << " " << added_mat[i][j];
                }
            cout << endl;
        }
        // for loop to print the product matrix
        cout << "Matrix Product (A*B): " << endl;
        for (int i =0;i<matrix_size;i++){
            for (int j=0;j<matrix_size;j++){
                cout << " " << product_mat[i][j];
                }
            cout << endl;
        }
        // for loop to print the difference matrix
        cout << "Matrix Difference (A-B): " << endl;
        for (int i =0;i<matrix_size;i++){
            for (int j=0;j<matrix_size;j++){
                cout << " " << difference_mat[i][j];
                }
            cout << endl;
        }
        // for (int i =0;i<matrix_size;i++){
        //     for (int j=0;j<matrix_size;j++){
        //         cout << mat2[i][j];
        //         }
        //     cout << endl;
        // }
    }
    my_file.close();
}
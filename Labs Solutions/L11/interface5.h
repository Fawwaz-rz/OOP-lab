//// Class.h file (class header file)
//#pragma once
//#ifndef CLASS5_H
//#include<string>
//#include<iostream>
//using namespace std;
//#define CLASS5_H
//#endif
//
//
//
//
//
//
//
//
//
//
//
//// ///////////////////////////////////////////SIR I'VE WRITTEN THIS CODE AS FOR MY CONCEPT  IDK HOW FAR THESE ARE CORRECT OR NOT I'VE A LITTLE CONCEPT ABOUT IT I'VE WRITTEN THESE CODES USING THE KNOWLEDGE OF SLIDES THAT ARE PROVIDED BY OUR COURSE SIR/////////////////////////////////////////////////////
//
//class Matrix {
//public:
//    int rows;
//    int cols;
//    int** data;
//    Matrix(int r, int c) : rows(r), cols(c), data(new int* [r]) {
//        for (int i = 0; i < r; ++i) {
//            data[i] = new int[c];
//            for (int j = 0; j < c; ++j) {
//                data[i][j] = 0;
//            }
//        }
//    }
//
//    ~Matrix() {
//        for (int i = 0; i < rows; ++i) {
//            delete[] data[i];
//        }
//        delete[] data;
//    }
//    Matrix& operator++() {
//        for (int i = 0; i < rows; ++i) {
//            for (int j = 0; j < cols; ++j) {
//                ++data[i][j];
//            }
//        }
//        return *this;
//    }
//    Matrix operator++(int) {
//        Matrix copy(*this);
//        for (int i = 0; i < rows; ++i) {
//            for (int j = 0; j < cols; ++j) {
//                ++data[i][j];
//            }
//        }
//        return copy;
//    }
//    Matrix operator--() {
//        for (int i = 0; i < rows; ++i) {
//            for (int j = 0; j < cols; ++j) {
//                --data[i][j];
//            }
//        }
//        return *this;
//    }
//
//    Matrix operator--(int) {
//        Matrix copy(*this);
//        --(*this);
//        return copy;
//    }
//    Matrix operator+(const Matrix& other) const {
//        if (rows != other.rows || cols != other.cols) {
//            throw invalid_argument("Matrices must have same dimensions for addition");
//        }
//
//        Matrix result(rows, cols);
//        for (int i = 0; i < rows; ++i) {
//            for (int j = 0; j < cols; ++j) {
//                result.data[i][j] = data[i][j] + other.data[i][j];
//            }
//        }
//        return result;
//    }
//
//    Matrix operator-(const Matrix& other) const {
//        if (rows != other.rows || cols != other.cols) {
//            throw invalid_argument("Matrices must have same dimensions for subtraction");
//        }
//
//        Matrix result(rows, cols);
//        for (int i = 0; i < rows; ++i) {
//            for (int j = 0; j < cols; ++j) {
//                result.data[i][j] = data[i][j] - other.data[i][j];
//            }
//        }
//        return result;
//    }
//    friend istream& operator>>(istream& in, Matrix& mat) {
//        for (int i = 0; i < mat.rows; ++i) {
//            for (int j = 0; j < mat.cols; ++j) {
//                in >> mat.data[i][j];
//            }
//        }
//        return in;
//    }
//
//    friend ostream& operator<<(ostream& out, const Matrix& mat) {
//        for (int i = 0; i < mat.rows; ++i) {
//            for (int j = 0; j < mat.cols; ++j) {
//                out << mat.data[i][j] << " ";
//            }
//            out << endl;
//        }
//        return out;
//    }
//
//
//};
//
//

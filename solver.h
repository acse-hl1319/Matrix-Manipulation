#pragma once
#include <iostream>
#include <tuple>
#include <math.h>
#include "Matrix.h"

using namespace std;
template<class T>
void swap_rows(Matrix<T>& A, int& j, int& k);

template<class T>
int argmax(int& k, Matrix<T>& A);

template<class T>
void LU_decomposition_pp(Matrix<T>& A, Matrix<T>& L, Matrix<T>& P_);

template<class T>
void backward_substitution(Matrix<T>& U, T* b, T* output);

template<class T>
void forward_substitution(Matrix<T>& L, T* b, T* output);

template<class T>
void LU_solver(Matrix<T>& A, T* x, T* b);
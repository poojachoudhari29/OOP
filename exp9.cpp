#include <bits/stdc++.h>
using namespace std;
class Matrix
{
    int row, col;
    // vector< vector<int> > vec;
    int vec[10][10];

public:
    Matrix()
    {
        row = col = 3;
    }
    Matrix(int r, int c)
    {
        row = r, col = c;
    }
    ~Matrix()
    {
    }
    friend istream &operator>>(istream &, Matrix &);
    friend ostream &operator<<(ostream &, Matrix &);
    friend Matrix operator+(Matrix, Matrix);
    friend Matrix operator-(Matrix, Matrix);
    friend Matrix operator*(Matrix, Matrix);
    friend void add(Matrix, Matrix);
    friend void sub(Matrix, Matrix);
    friend void mul(Matrix, Matrix);
    int isMatrix_add();
    friend int check(Matrix, Matrix);
};
void add(Matrix M1, Matrix M2)
{
    if (M1.row != M2.row && M1.col != M2.col)
    {
        cout << "\nYou cannot add matrices...\n";
        return;
    }
    cout<<"\nAddition of matrices is :\n";
    Matrix M;
    M = M1 + M2;
    cout << M;
}
void sub(Matrix M1, Matrix M2)
{
    if (M1.row != M2.row && M1.col != M2.col)
    {
        cout << "\nYou cannot subtract matrices...\n";
        return;
    }
    cout<<"\nSubtraction of matrices is :\n";
    Matrix M;
    M = M1 - M2;
    cout << M;
}
void mul(Matrix M1, Matrix M2)
{
    if (M2.row != M1.col)
    {
        cout << "\nYou cannot multiply matrices...\n";
    }
    cout<<"\nMultiplication of matrices is :\n";
    Matrix M;
    M = M1 * M2;
    cout << M;
}
istream &operator>>(istream &in, Matrix &M)
{
    cout << "\nEnter values of matrix :\n";
    for (int i = 0; i < M.row; i++)
    {
        for (int j = 0; j < M.col; j++)
        {
            in >> M.vec[i][j];
        }
        
    }
    return in;
}
ostream &operator<<(ostream &out, Matrix &M)
{
    for (int i = 0; i < M.row; i++)
    {
        for (int j = 0; j < M.col; j++)
        {
            out << M.vec[i][j]<<"\t";
        }
        out << endl;
    }
    return out;
}
Matrix operator+(Matrix M1, Matrix M2)
{

    Matrix M;
    for (int i = 0; i < M.row; i++)
    {
        for (int j = 0; j < M.col; j++)
        {
            M.vec[i][j] = M1.vec[i][j] + M2.vec[i][j];
        }
    }
    return M;
}
Matrix operator-(Matrix M1, Matrix M2)
{
    Matrix M;
    for (int i = 0; i < M.row; i++)
    {
        for (int j = 0; j < M.col; j++)
        {
            M.vec[i][j] = M1.vec[i][j] - M2.vec[i][j];
        }
    }
    return M;
}
Matrix operator*(Matrix M1, Matrix M2)
{
    Matrix M;
    for (int i = 0; i < M.row; i++)
    {
        for (int j = 0; j < M.col; j++)
        {
            M.vec[i][j]=0;
            for (int k = 0; k < M1.col; k++)
                M.vec[i][j] += M1.vec[i][k] * M2.vec[k][j];
        }
    }
    return M;
}
int main()
{
    Matrix M1(3,2),M2(2,3);
    cin >> M1;
    cin >> M2;
    // cout << M1;
    add(M1,M2);
    sub(M1,M2);
    mul(M1,M2);
    M1.~Matrix();
    M2.~Matrix();
}
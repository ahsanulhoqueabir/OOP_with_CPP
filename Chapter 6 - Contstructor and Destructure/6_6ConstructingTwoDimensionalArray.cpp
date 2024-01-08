#include <bits/stdc++.h>
using namespace std;

class matrix
{
    int *p;
    int row, col;

public:
    matrix(int row, int col);

    void store(int i, int j, int value);
    int display(int i, int j);
};
matrix::matrix(int row, int col)
{
    this->row = row;
    this->col = col;
    p = new int[row * col];
}
void matrix::store(int i, int j, int value)
{
    *(p + i * col + j) = value;
}
int matrix::display(int i, int j)
{
    return *(p + i * col + j);
}

int main()
{

    int x, y;
    cout << "Enter row and column: ";
    cin >> x >> y;
    matrix m(x, y);
    // storing elements of the matrix
    cout << "Enter elements of the matrix: " << endl;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << "Enter value of [" << i <<" "<< j << "] : ";
            int value;
            cin >> value;
            m.store(i, j, value);
        }
    }
    // displaying elements of the matrix
    cout << endl;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << m.display(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}
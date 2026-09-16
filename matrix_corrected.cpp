#include <iostream>
using namespace std;

void display(int a[10][10], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void addition(int A[10][10], int B[10][10], int C[10][10], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Sum: " << endl;
    display(C, r, c);
}

void subtraction(int A[10][10], int B[10][10], int C[10][10], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    cout << "Difference: " << endl;
    display(C, r, c);
}

void multiplication(int A[10][10], int B[10][10], int C[10][10],
                    int r1, int c1, int c2)
{
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            C[i][j] = 0;

            for(int k = 0; k < c1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Product: " << endl;
    display(C, r1, c2);
}

void transpose(int A[10][10], int C[10][10], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            C[j][i] = A[i][j];
        }
    }

    cout << "Transpose: " << endl;
    display(C, c, r);
}

int main()
{
    int A[10][10], B[10][10], C[10][10];
    int r1, c1, r2, c2, ch;

    cout << "Enter size of matrix A: ";
    cin >> r1 >> c1;

    cout << "Enter the elements of matrix A:" << endl;

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "Enter size of matrix B: ";
    cin >> r2 >> c2;

    cout << "Enter the elements of matrix B:" << endl;

    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            cin >> B[i][j];
        }
    }

    cout << "\nMENU";
    cout << "\n____";
    cout << "\n1. Addition";
    cout << "\n2. Subtraction";
    cout << "\n3. Multiplication";
    cout << "\n4. Transpose";

    cout << "\nEnter your choice: ";
    cin >> ch;

    switch(ch)
    {
        case 1:
            if(r1 == r2 && c1 == c2)
            {
                addition(A, B, C, r1, c1);
            }
            else
            {
                cout << "\nAddition not possible";
            }
            break;

        case 2:
            if(r1 == r2 && c1 == c2)
            {
                subtraction(A, B, C, r1, c1);
            }
            else
            {
                cout << "\nSubtraction not possible";
            }
            break;

        case 3:
            if(c1 == r2)
            {
                multiplication(A, B, C, r1, c1, c2);
            }
            else
            {
                cout << "\nMultiplication not possible";
            }
            break;

        case 4:
            transpose(A, C, r1, c1);
            break;

        default:
            cout << "INVALID CHOICE!";
    }

    return 0;
}

#include <iostream>
using namespace std;

void update(int &a)
{
    a++;
}

int main()
{
    // int i=6;
    // int& j=i;
    // i++;
    // cout<< i <<endl;
    // cout<< j <<endl;
    // j++;
    // cout<< i <<endl;
    // cout<< j <<endl;

    // Call by Referance
    int n = 2;
    cout << n << endl;
    update(n);
    cout << n << endl;

    // Using heap memory for variable array
    char *p = new char;
    int *arr = new int[n];
    *p = 'a';
    cout << *p << endl;
    delete p;
    delete[] arr;

    // 2d array
    int **arr1 = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr1[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]:" << endl;
            cin >> arr1[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete [] arr1[i];
    }
    delete []arr1;

    // // JAGGERED ARRAY
    // int row;
    // cout << "Enter no. of rows: " << endl;
    // cin >> row;
    // int **arr2 = new int *[row];
    // int *col= new int[row];
    // for (int i = 0; i < row; i++)
    // {
    //     cout << "Enter no. of Col(max upto 100) for Row " << i << ":" << endl;
    //     cin >> col[i];
    //     arr2[i] = new int[col[i]];
    // }

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col[i]; j++)
    //     {
    //         cout << "Enter element [" << i << "][" << j << "]:" << endl;
    //         cin >> arr2[i][j];
    //     }
    // }

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col[i]; j++)
    //     {
    //         cout << arr2[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // delete []col;
    // for (int i = 0; i < row; i++)
    // {
    //     delete [] arr2[i];
    // }
    // delete []arr2;

    return 0;
}
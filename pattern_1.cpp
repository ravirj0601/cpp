#include <iostream>
using namespace std;

int solid_rectangle()
{
    int rows, columns;
    cout << "Enter The no of rows and column :-" << endl;
    cin >> rows >> columns;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

int half_Pyramid()
{
    int row;
    cout << "Enter no rows:-";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int inverthalf_pyramid()
{
    int row;
    cout << "Enter no rows:-";
    cin >> row;
    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

int rotated_halfpyramid()
{
    int row;
    cout << "Enter no rows:-";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (j <= row - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}

int half_Pyramid_No()
{
    int row;
    cout << "Enter no rows:-";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

int half_Pyramid_No_1()
{
    int row;
    cout << "Enter no rows:-";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int invert_half_pyramid_inno()
{
    int row;
    cout << "Enter No of rows:- ";
    cin >> row;
    for (int i = row; i >= 1; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}

int invert_half_pyramid_inno2()
{
    int row;
    cout << "Enter No of rows:- ";
    cin >> row;
    for (int i = row; i >= 1; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}

int floyds_triangle()
{
    int g = 0;
    int row;
    cout << "Enter no of row:-";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            g += 1;
            cout << g << " ";
        }
        cout << endl;
    }
}

int binary_pattern()
{
    int row;
    cout << "Enter no of Row's:-";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
                cout << "1 ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int pyramid_no()
{
    int row,r=0;
    cout << "Enter no of Row's:-";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (j <= row - i)
            {
                cout << " ";
            }
            else
            {
                r++;
                cout << r << " ";
            }
        }
        cout<<endl;
    }
}

int palindrom_pattern()
{
    int row,r=0;
    cout << "Enter no of Row's:-";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (j <= row - i)
            {
                cout << " ";
            }
            
            else
            {
                r++;
                cout << r << " ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout << "Operations----------------Choices" << endl
         << "_________________________________" << endl
         << "Solid Rectangle            :- 1" << endl
         << "Half Pyramid               :- 2" << endl
         << "Invert Half Pyramid        :- 3" << endl
         << "Rotated Half Pyramid       :- 4" << endl
         << "Half Pyramid With Row No   :- 5" << endl
         << "Half Pyramid With No       :- 6" << endl
         << "Invert Half Pyramid Inno   :- 7" << endl
         << "Invert Half Pyramid Inno 2 :- 8" << endl
         << "Floyds Triangle            :- 9" << endl
         << "0-1 Pattern Pyramid        :- 10" << endl
         << "Pyramid Of Numbers         :- 11" << endl
         << "Palindrom Pattern          :- 12" << endl;

    cout << "Enter Your Choice of Pattern:-";
    cin >> n;
    switch (n)
    {
    case 1:
        solid_rectangle();
        break;
    case 2:
        half_Pyramid();
        break;
    case 3:
        inverthalf_pyramid();
        break;
    case 4:
        rotated_halfpyramid();
        break;
    case 5:
        half_Pyramid_No();
        break;
    case 6:
        half_Pyramid_No_1();
        break;
    case 7:
        invert_half_pyramid_inno();
        break;
    case 8:
        invert_half_pyramid_inno2();
        break;
    case 9:
        floyds_triangle();
        break;
    case 10:
        binary_pattern();
        break;
    case 11:
        pyramid_no();
        break;
    case 12:
        palindrom_pattern();
        break;
    default:
        break;
    }

    return 0;
}

/*
  	Reema Amhaz - CS 135 - Section 1003
        This program will multiply two integer matrices and output the results to a
        third matrix. There will be an error if the correct number of arguments is
        not provided and a different error if either of the files cannot be opened.
        If it is not possible to multiply the matrices together then there will be
        an error. If it is possible to multiply the matrices, the output will print out.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

const int ROWS = 10;
const int COLS = 10;

void calculate_product(int [][10], int[][10], int [][10], int, int, int);

void display_matrix_product(int [][10], int, int);

int main(int argc, char **argv)
{

        int matrix_one[10][10], matrix_two[10][10], prod[10][10] = {0};
        int r1, c1, r2, c2;
// this will determine if there were enough arguments given
        if (argc != 3)
        {
                        cout << "Error, must provide exactly two arguments!" << endl;
                        return 1;
        }

	ifstream infile;
        infile.open(argv[1]);
// this will display an error if there is no way to enter the file
        if (!infile)
        {
                cout << "Error, file could not be opened!" << endl;
                return 1;
        }
// this uses iss to fill the array and increment the position of the rows and columns
        string line;
        while (getline(infile, line))
        {
                istringstream iss(line);
                c1 = 0;
                while (iss >> matrix_one[c1][r1])
                {
                        c1++;
                }
                        r1++;
       }


	infile.close();

// this repeats the same process for the second argument given
        infile.open(argv[2]);

        if (!infile)
        {
                cout << "Error, file could not be opened!" << endl;
                return 1;
        }

	while (getline(infile, line))
        {
                istringstream iss(line);
                c2 = 0;
                while (iss >> matrix_two[c2][r2])
                {
                        c2++;
                }
                        r2++;
        }
//  this will print an error if the columns don't match the amount of rows
        if (c1 != r2)
        {
                cout << "Error: Matrices cannot be multiplied!" << endl;
                            return 1;
        }

	while (getline(infile, line))
        {
                istringstream iss(line);
                c2 = 0;
                while (iss >> matrix_two[c2][r2])
                {
                        c2++;
                }
                        r2++;
        }
//  this will print an error if the columns don't match the amount of rows
        if (c1 != r2)
        {
                cout << "Error: Matrices cannot be multiplied!" << endl;
                return 1;
        }

	infile.close();


        calculate_product(matrix_one, matrix_two, prod, r1, c1, c2);

        display_matrix_product(prod, r1, c2);
}

// this will calculate the outside values in the rows of the 1st matrix  multiplied by each colum$
void calculate_product(int matrix_1[][COLS], int matrix_2[][COLS], int prod[][COLS], int r1, int $
{
        int i, j, k;

        for (i = 0; i < r1; i++)
        {
                for (j = 0; j < c2; j++)
                {
                        for (k = 0; k < c1; k++)
                        {
                                prod[i][j] += matrix_1[i][k] * matrix_2[k][j];
                        }
                }

        }
}
// this then displays the matrix product by putting it into a third matrix and right aligns it
void display_matrix_product(int prod[][COLS], int r1, int c2)
{
        for(int i = 0; i < r1; ++i)
        {
                for(int j = 0; j < c2; ++j)
                {
                        cout << right << setw(8) << prod[i][j] << " ";;
                        if(j == c2 - 1)
                                cout << endl;
                }
        }
}

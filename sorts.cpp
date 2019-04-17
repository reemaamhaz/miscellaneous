/*
Reema Amhaz
        This code reads in values from two files named "data1" and "data2"
        and then uses an array to display the values with a space between
        each value on the same line. After displaying the data from the files,
        we use insertion sort to sort the data in "data1" and output it using
        an array and calling the void function. The third statement that is
        printed is the sorted data from "data1" and the unsorted data from
        "data2," which we use the display function to print the values out.
        Lastly, the code will use selection sort to sort the data from both
        files using an array, and prints them to the screen with a space in
        between each value.
*/
#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int read(ifstream &, int [], int);

void display(int [], int);

void insertion_sort(int [], int);

void selection_sort(int [], int);

int main()
{
        int list[100];

        int count = 0;
// this is how filled our array is

        ifstream infile;
        infile.open("data1");

        count = read(infile, list, count);
// this calls count and names the function and the parameters it takes
        infile.close();


        display(list, count);

        insertion_sort(list, count);
// this displays the data and calls the insertion_sort function to int main()

        infile.open("data2");
// the following code is the same as above, but it now uses insertion sort

        count = read(infile, list, count);

        infile.close();
        

        display(list, count);

        selection_sort(list, count);

        return 0;
}

int read(ifstream &data, int list[], int pos)
{
        while(data >> list[pos])
        {
                pos++;
        }
	return pos;
}
// this reads in the data using ifstream from int main() and increments the position

void display(int b[], int vals)
{
        for (int i = 0; i < vals; i++)
        {
                if (b[i] != b[0])
                {
                        cout << " ";
                }
                cout << b[i];
        }
	cout << endl;
}
// this function displays the values from data and adds a space after each value

void insertion_sort(int val[], int val_length)
{
        int firstval, position, temp;

        for (firstval = 1; firstval < val_length; firstval++)
        
        if (val[firstval] < val[firstval - 1])
        {
                temp = val[firstval];
                position = firstval;

                do
                {
                        val[position] = val[position - 1];
                        position--;
                }
                while (position > 0 && val[position -1] > temp);

                val[position] = temp;
        }

	for (int i = 0; i < firstval; i++)
        {
                if (val[i] != val[0])
                {
                       cout << " ";
                }
                cout << val[i];
        }
	cout << endl;
}
/*
  	This function uses insertion sort which compares each value to determine the
    minimum and once it finds a value that is smaller it moves it back and
    continues to do this until it is all sorted. The latter half of this
    prints each value with a space after except the last one.
*/

void selection_sort(int list[], int list_length)
{
        int index, min, location, temp;

        for (index = 0; index < list_length - 1; index++)
        {
                min = index;

                for (location = index + 1; location < list_length; location++)
                if (list[location] < list[min])
                        min = location;
// this will check the smallest value and change the value the data is compared to

                temp = list[min];
                list[min] = list[index];
                list[index] = temp;
// this step will then update the values in each list

        }

	for (int i = 0; i < list_length; i++)
        {
                if (list[i] != list[0])
                {
                       cout << " ";
                }
                cout << list[i];
        }
        cout << endl;
}
/*
        This function uses selection sort which tests each value to find the smallest
        value and moves it to the front of the string. It continues to do
        this until it is all sorted. The latter half of this prints each value
        with a space after except the last one.
*/

/*
  	Reema Amhaz - CS 135
        This program creates an array of 100,001 structs, and determines within the set ranges
        how many prime, perfect, perfect square, and triangular values there are. The program
        uses four bool functions to determine how many values meet that condition and then
        outputs them to the main function. They are each printed out and have counters
        to determine the total amount of special numbers within each range of data.
*/
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>

using namespace std;

const int MAX_VALUES = 100001;
const int MIN = 0;
const int MAX = 100000;

/*
  	this is the definition of the struct
*/
struct number_properties
{
        int number;
        bool prime, perfect, square, triangular;
};

bool is_prime(int);
bool is_perfect(int);
bool is_perfect_square(double);
bool is_triangular(int);

int main()
{
        int prime = 0, perf = 0, sq = 0, tri = 0;

        number_properties val[MAX_VALUES];

        for(int i = 0; i < MAX_VALUES; i++)
        {
                val[i].number = i;
                val[i].prime = is_prime(i);
                val[i].perfect = is_perfect(i);
                val[i].square = is_perfect_square(i);
                val[i].triangular = is_triangular(i);
        }
/*
  	this for loop initiates the range of values that are examined
*/

        for(int j = 0; j < MAX; j++)
        {
               val[i].number = i;
                val[i].prime = is_prime(i);
                val[i].perfect = is_perfect(i);
                val[i].square = is_perfect_square(i);
                val[i].triangular = is_triangular(i);
        }
/*
  	this for loop initiates the range of values that are examined
*/

        for(int j = 0; j < MAX; j++)
        {
                if (val[j].prime)
                        prime++;
                if (val[j].perfect)
                        perf++;
                if (val[j].square)
                        sq++;
                if (val[j].triangular)
                        tri++;
        }
	cout << "Range 1 to 100000:" << endl;
        cout << '\t' << prime << " prime numbers" << endl;
        cout << '\t' << perf << " perfect numbers" << endl;
        cout << '\t' << sq << " perfect square numbers" << endl;
        cout << '\t' << tri << " triangular numbers" << endl;
/*
  	this will determine if the bool is true, if it, the count will increment and is print below
*/

        for (int j = 0; j < 10000; j++)
        {
                if (val[j].prime)
                        prime++;
                if (val[j].perfect)
                        perf++;
                if (val[j].square)
                        sq++;
                if (val[j].triangular)
                        tri++;
                        }
	cout << "Range 1 to 10000:" << endl;
        cout << '\t' << prime << " prime numbers" << endl;
        cout << '\t' << perf << " perfect numbers" << endl;
        cout << '\t' << sq << " perfect square numbers" << endl;
        cout << '\t' << tri << " triangular numbers" << endl;

        for (int j = 0; j < 20000; j++)
        {
                if (val[j].prime)
                        prime++;
                if (val[j].perfect)
                        perf++;
                if (val[j].square)
                        sq++;
                if (val[j].triangular)
                        tri++;
        }
	cout << "Range 1 to 20000:" << endl;
        cout << '\t' << prime << " prime numbers" << endl;
        cout << '\t' << perf << " perfect numbers" << endl;
        cout << '\t' << sq << " perfect square numbers" << endl;
        cout << '\t' << tri << " triangular numbers" << endl;

        for (int j = 10000; j < 20000; j++)
        {
                if (val[j].prime)
                        prime++;
                        if (val[j].perfect)
                        perf++;
                if (val[j].square)
                        sq++;
                if (val[j].triangular)
                        tri++;
        }
        cout << "Range 10001 to 20000:" << endl;
        cout << '\t' << prime << " prime numbers" << endl;
        cout << '\t' << perf << " perfect numbers" << endl;
        cout << '\t' << sq << " perfect square numbers" << endl;
        cout << '\t' << tri << " triangular numbers" << endl;
/*
        the initial value is different in this set of values, so we initiate it differently
*/

        for (int j = 0; j < 50000; j++)
        {
                if (val[j].prime)
                        prime++;
                if (val[j].perfect)
                        perf++;
                if (val[j].square)
                        sq++;
                if (val[j].triangular)
                        tri++;
        }
        cout << "Range 1 to 50000:" << endl;
        cout << '\t' << prime << " prime numbers" << endl;
        cout << '\t' << perf << " perfect numbers" << endl;
        cout << '\t' << sq << " perfect square numbers" << endl;
        cout << '\t' << tri << " triangular numbers" << endl;

        for (int j = 50000; j < MAX; j++)
        {
                if (val[j].prime)
                        prime++;
                if (val[j].perfect)
                        perf++;
                if (val[j].square)
                        sq++;
                if (val[j].triangular)
                        tri++;
        }
	      cout << "Range 50001 to 100000:" << endl;
        cout << '\t' << prime << " prime numbers" << endl;
        cout << '\t' << perf << " perfect numbers" << endl;
        cout << '\t' << sq << " perfect square numbers" << endl;
        cout << '\t' << tri << " triangular numbers" << endl;
}

/*
  	this bool determines if the value is prime or not by checking if it is divisible by
        two or less than two because it is going to be not prime in those instances
*/
bool is_prime(int n)
{
        if (n == 2)
                return true;

        if (n % 2 == 0 || n < 2)
                return false;

        for (int i = 3; i <= sqrt(n); i += 2)
                if (n % i == 0)
                        return false;

        return true;
}

/*
  	this bool determines if the number is perfect by checking if the number is divisible by i
        that the result is 0 and then it gets incremented, thus seeing if the sum is equal to the
        the original value and if it the latter then it is perfect
*/
bool is_perfect(int num)
{
        int sum = 0, i = 1;

        bool flag = false;

        while (i < num)
        {
                if (num % i == 0)
                        sum = sum + i;
                        i++;
        }

	if (sum == num)
                flag = true;

        return flag;
}

/*
  	this function checks if the square root of a value can be multiplied by itself to be a perfect
        square otherwise it evaluates to false
*/
bool is_perfect_square(double b)
{
        double temp = sqrt(b);

        temp = static_cast<int>(temp);

        temp = pow (temp, 2);

        if (temp == b)
        {
                return true;
        }
	return false;
}

/*
  	this last bool determines if the value is triangular and will evaluate to true if the
        number is the sum of its natural numbers
*/
bool is_triangular(int tri)
{
   if (tri < 0)
        return false;

    int sum = 0;
    for (int n = 1; sum <= tri; n++)
   {
    	sum = sum + n;
        if (sum == tri)
            return true;
    }

    return false;
}



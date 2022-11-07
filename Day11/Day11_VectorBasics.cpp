//Topic: Vector
//Description: Fundamentals

/*
The following program shows fundamentals of vector where a vector is created and input is passed through a text file.
After that the vector is printed into the console.
*/

#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    vector <int> v;

    ifstream fin;
	fin.open("Day11_data.txt");

    if (!fin){
        cout << "Unable to open file" << endl;
        exit(0);
    }

    while(!fin.eof())
    {
        int k;
        fin >> k;
        v.push_back(k);
    }

    fin.close();

    int total = 0;
    for(int p:v)
    {
        cout << p << ", ";
        total += p;
    }

    double avg = (double)total / v.size();
    cout << endl;
    cout << "Average: " << avg << endl;

    return 0;
}

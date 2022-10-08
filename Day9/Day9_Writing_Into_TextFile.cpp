//Topic: File Handling
//Description: Writing into a text file.

/*
The following program shows how to display output into a text file.
*/

#include <iostream>
#include <fstream> // for ofstream
#include <cstdlib> // for exit(1)

using namespace std;

int main()
{
    ofstream fout;
    fout.open("Day9_SampleOutput.txt");

    if (fout.fail())
    {
        cout << "Error in opening file" << endl;
        exit(1);
    }

    fout << "Hello world!" << endl;
    fout << "This will be the second line" << endl;
    fout << "file" << endl;
    int a = 35;
    double p = 35.7;
    fout << "a = " << a << ", p = " << p << endl;

    fout.close();
    return 0;
}

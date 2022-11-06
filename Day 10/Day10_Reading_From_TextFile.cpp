//Topic: File Handling
//Description: Reading from a text file.

/*
The following program shows how to get input from a text file.
*/


#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("Day10_SampleInput.txt");

    if (!fin)
    {
        cout << "Error while opening file" << endl;
        exit(1);
    }

    int temp;
    fin >> temp;
    cout << "This is first item " << temp << endl;

    int val;
    while(!fin.eof())
    {
        fin >> val;
        cout << val << " ";
    }

    fin.close();
    return 0;
}

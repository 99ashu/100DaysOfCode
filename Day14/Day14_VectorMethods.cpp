// Topic: Vector
// Description: Vector Functions

/*
This program demonstrates several vector functions.
*/

#include <vector>

using namespace std;

void display(vector <string> &v)
{
    for(vector<string>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << ", ";
    }
    cout << endl;
}

int main()
{
    vector <string> names {"John", "Tony", "Alvina", "Sova", "Pheniox", "Raze", "Daisy"};
    display(names);

    names.front() = "AAA";
    display(names);

    names.back() = "ZZZ";
    display(names);

    names.erase(names.begin());
    display(names);

    names.erase(names.end());
    display(names);

    names.erase(names.begin(), names.begin() + 2);
    display(names);

    names.insert (names.begin() + 2, "WWW");
    display(names);

    names.pop_back();
    display(names);

    names.clear();
    display(names);


    return 0;
}

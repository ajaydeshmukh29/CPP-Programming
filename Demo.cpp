// #include <iostream>
// using namespace std;

// int main()
// {
//     cout<<"Jay Ganesh...\n";

//     return 0;
// }





#include <iostream>
using namespace std;

int main()
{
    int* i = new int;   // dynamically allocate memory
        cout << *i << endl;   // value

    *i = 11;

    cout << *i << endl;   // value
    cout << i << endl;    // address

    delete i;             // free memory
    cout << *i << endl;   // value
    cout << i << endl;    // address

    return 0;
}
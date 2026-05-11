#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        float f;
};

int main()
{
    Demo dobj;

    cout<<sizeof(dobj)<<"\n";       // 8

    return 0;
}

#include<iostream>
using namespace std; 

class ClassName
{
    public:
    int x;

    void show()
    {
        cout << x;
    }
};

int main()
{
    ClassName obj;
    obj.x = 10;
    obj.show();
    return 0;
}

// // #include<iostream>
// // using namespace std;

// // class Ajay
// // {
// //     public:
// //     char name;
// // };

// // int main()
// // {
// //     Ajay obj;
// //     obj.name = 'a';
// //     cout << obj.name << " ";
// //     return 0;
// // }

// #include<iostream>
// using namespace std;

// class name
// {
//     public:
//         int i;
// };

// int main()
// {
//     name obj;
//     obj.i= 10;
//     return 0;
// }







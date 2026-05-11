#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;              // Chracteristics
        float f;            // Chracteristics

        void fun()          // Behaviour
        {
            cout<<"Inside fun\n";
        }
};

int main()
{
    Demo dobj;

    cout<<sizeof(dobj)<<"\n";       // 8
    
    return 0;
}



// //=======================================================

// #include<iostream>
// using namespace std;

// class college
// {
//     public:
//     int RID = 0;
//     string name;
// };

// int main()
// {
//     college dobj;
//     dobj.RID = 251;
//     dobj.name = "Ajay";

//     cout << dobj.RID << "\n";
//     cout << dobj.name << "\n";

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Marvellous
// {
//     public:
//     string name;
    
//     private:
//     int RID;
// };
// int main()
// {
//     Marvellous dobj;
//     dobj.name = "Ajay Deshmukh";
//     cout << dobj.name<<"\n";
//     // dobj.RID = 251;
//     return 0;
// }


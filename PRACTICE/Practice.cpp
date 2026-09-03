// #include<iostream>
// using namespace std;

// class Demo
// {
  
  // double f;
  // int ch;
  // total size 8+8 = 16

  // int ch;
  // char ch2;
  // double d;
  // total size 4+4+8 = 16

  // double d;
  // int i;
  // char ch;
  // total size 8+4+4 = 16

  // int i;
  // float f;
  // char ch;
  // char c2;
  // char ch3;
  // char ch4;
  // char ch5;
  // total size = 16
// };

// int main()
// {
//   Demo dobj;

//   cout<<sizeof(dobj)<<"\n"; 
//   return 0;
// }


// #include<iostream>
// using namespace std;
// class ClassName
// {
//   public:
//   int i;    // Characteristics
//   float f;  // Characteristics

//   void Fun()
//   {
//     cout << i;  // Behaviour
//   }
// };

// #include<iostream>
// using namespace std;

// class Marvellous
// {
//   public:
//   int No1, No2; // characteristics

//   void Fun()  // Behaviour
//   {
//     cout << "Inside Fun\n";
//   }

//   void Gun()  // Behaviour
//   {
//     cout<<"Inside Gun\n";
//   }
// };

// int main()
// {
//   Marvellous M1;
//   M1.Fun();
//   M1.Gun();
  
//   return 0;
// }

// #include<iostream>
// using namespace std;

// // Encapsulation
// class Marvellous
// {
//     // Access specifier
//     public:
//     int No1, No2;   // Characteristics

//     void Fun()      // Behaviour
//     {
//         cout<<"Inside Fun\n";
//     }

//     void Gun()      // Behaviour
//     {
//         cout<<"Inside Gun\n";
//     }
// };

// int main()
// {
//     // Object creation (Instance)
//     Marvellous mobj1;
//     Marvellous mobj2;
    
//     cout<<sizeof(mobj1)<<"\n";  // 8

//     cout<<mobj1.No1<<"\n";

//     mobj1.Fun();
//     mobj2.Fun();

//     mobj1.Gun();

//     return 0;
// }

//  CONSTRUCTOR CALLED USING CONSTRUCTOR 
// #include<iostream>
// using namespace std;

// class Student
// {
//   public:
//   int id;

//   Student () //constructor
//   {
//     cout << "Constructor called" << endl;
//   }
// };

// int main()
// {
//   Student s1;
//   return 0;
// }
//Constructor called


//  CONSTRUCTOR CALLED USING FUNCTION
// #include<iostream>
// using namespace std;

// class Student 
// {
//   public:
//   int id;

//   void Student1() // function
//   {
//     cout << "Constructor Called" << endl;
//   }
// };

// int main()
// {
//   Student s1;
//   s1.Student1();
 // }

// Function overloading
// #include<iostream>
// using namespace std;
// class FunctionOverloading
// {
//   public:
//     int AdditionTwo(int a, int b)
//     {
//       return a+b;
//     }
//     int AdditionThree(int a, int b, int c)
//     {
//       return a+b+c;
//     }
//     char ch(char a, char b)
//     {
//       cout <<a<<endl;
//       cout <<b<<endl;
//     }
// };

// int main()
// {
//   FunctionOverloading fobj;
//   cout <<fobj.AdditionTwo(10,01);
//   fobj.ch('H', 'b');
//   return 0;
// }

// #include<iostream>
// using namespace std;
// class Demo
// {
//   public:
//     int i;
//     int j = 12;
//     static int k;

//     Demo()
//     {
//       i = 0;
//       j = 0;
//     }
// };
// int Demo :: k = 1;

// int main()
// {
//   Demo dobj;

//   cout <<dobj.i << endl;
//   cout <<dobj.j << endl;
//   cout <<Demo::k <<endl;

// }

// #include<iostream>
// using namespace std;
// class Demo
// {
//   public:
//   int i;
//   int j;
//   static int k;

//   Demo()
//   {
//     i = 0;
//     j = 0;
//   }

//   void fun()
//   {
//     cout <<"Inside non static fun\n";
//     cout <<"i : "<<i<<"\n";
//     cout <<"j : "<<j<<"\n";
//     cout <<"k : "<<k<<"\n";
//   }

//   static void gun()
//   {
//     cout << "Inside static gun\n";
//     cout << "k : "<<k<<"\n";
//   }
// };
// int Demo :: k = 11;
// int main()
// {
//   cout<<Demo::k<<"\n";
//   Demo::gun();
//   Demo dobj;

//   cout <<dobj.i<<"\n";
//   cout <<dobj.j<<"\n";

//   dobj.fun();
//   return 0;
// }


// #include<iostream>
// using namespace std;

// class FunctionOverloading
// {
//   public:

//   int AdditionTwo(int a, int b)
//   {
//     return a + b;
//   }

//   int AdditionThree(int a, int b, int c)
//   {
//     return a+b+c;
//   }

//   int AdditionFour(int a, int b, int c, int d)
//   {
//     return a+b+c+d;
//   }

// };

// int main()
// {
//   FunctionOverloading obj1;
//   cout<<obj1.AdditionTwo(11,12);
//   cout<<obj1.AdditionFour(12 , 12, 12, 12);
//   cout<<obj1.AdditionThree(1,2,3);

//   return 0;
// }


// #include<iostream>
// using namespace std;
// class Demo
// {
//   public:

// }

// #include<iostream>
// using namespace std;

// int main()
// {
//   int no = 11;
//   int &x = no;
//   int &y = x;

//   cout << "Address of no is : " <<&x <<"\n";
//   cout <<"Address of &x is " <<&y;
  
//   return 0;

// }

// #include<iostream>
// using namespace std;
// int main()
// {
//   int arr[] = {1, 4, 3, 5, 8, 6};
//   int size = 6;
//   int min_no = INT8_MAX;

//   for(int i=0; i<=size; i++)
//   {
//     if(arr[i] <= min_no)
//     min_no = arr[i];
//   }
//   cout << " Minimum number: " << min_no;
//   return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//   int arr[] = {1, 4, 3, 5, 8, 6};
//   int size = 6;
//   int max = INT8_MIN;

//   for(int i=0; i<=size; i++)
//   {
//     if(arr[i] >= max)
//     max = arr[i];
//   }

//   cout << "Max Number : " << max;
//   return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//   int arr[] = {1, 4, 3, 5, 8, 6};
//   int size = 6;
//   int max = INT8_MIN;
//   int min = INT8_MAX;

//   for(int i=0; i<=size; i++)
//   {
//     if(arr[i] >= max)
//     max = arr[i];

//     if(arr[i] <= min)
//     min = arr[i];
//   }

//   cout << "Maximum : " << max << endl;
//   cout << "Minimum : " << min << endl;

//   return 0;
// }

#include<iostream>
using namespace std;
int main()
{
  int arr[] = {12, 32, 123, 5123, 2, 6};
  int size = 6;
  
}
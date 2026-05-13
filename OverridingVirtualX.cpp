// #include<iostream>
// using namespace std;

// class Base
// {
//   public:
//     int i,j;

//     void fun()    //1000
//     {cout<<"Inside Base fun\n";}

//     virtual void gun()    //2000
//     {cout<<"Inside Base gun\n";}

//     virtual void sun()    //3000
//     {cout<<"Inside Base sun\n";}

// };    //8 bytes


// class Derived : public Base
// {
//   public:
//     int x,y;

//     void fun()    //4000
//     {cout <<"Inside Derived fun\n";}

//     void sun()    //5000
//     {cout<<"Inside Base sun\n";}

//     virtual void run()    //6000
//     {cout<<"Inside Base run\n";}

    
// };    //16 bytes


// int main()
// {
//   Base *bp = new Derived();   //Upcasting

//   bp->fun();    // Base fun
//   bp->gun();    // Base gun
//   bp->sun();    // Derived sun
//   //bp->gun();    // Error

//   return 0;
// }



#include<iostream>
using namespace std;

class Base 
{
  public:
  int i,j;

  void fun()
  {
    cout<<"Inside Base fun...\n";
  }

  virtual void gun()
  {
    cout<<"Inside Base gun\n";
  }
};

class Derived : public Base
{
  public:
  int k;

  void fun()
  {
    cout <<"Inside Derived fun\n";
  }

  void gun()
  {
    cout <<"Inside Derived gun\n";
  }
};

int main()
{
  Base *bp = new Derived();

  bp->fun();
  bp->gun();
  return 0;
}
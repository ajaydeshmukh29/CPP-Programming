#include<iostream>
using namespace std;

int main()
{

  int size = 0;
  float *Marks = NULL;
  int i = 0;  // Loop Counter

  
  cout <<"Enter Number of elements: \n";
  cin>>size;


  // Dynamic Memory Allocation
  Marks = new float[size];

  cout <<"Enter your Marks: \n";
  

  // Iteration
  //    1       2   3
  for(i = 0; i < size; i++)
  {
     cin>>Marks[i];    // 4 th step
  }
     
  cout <<"Entered marks are : \n";
  
   //    1       2   3
  for(i = 0; i < size; i++)
  {
    cout <<Marks[i] <<"\n";    // 4 th step
  }




  delete [] Marks;  //bcs function  

  return 0;
}





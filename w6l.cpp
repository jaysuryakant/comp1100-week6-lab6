#include <iostream>
using namespace std;

int main()
{
    int grade;
    cout<<"enter the value:";
    cin>>grade;

  if (grade>=86){
     cout<<"grade=A";
  }
  else if (grade>=72){
     cout<<"grade=B";
  }
  else if (grade>=60){
     cout<<"grade=C";
  }  
  else if (grade>=50){
      cout <<"grade=D";    
  }
  else{
      cout << "grade=F";
  } 
     
   return 0;





}   
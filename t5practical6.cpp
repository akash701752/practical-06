 // Task 5 to Compare strings and see the Output in case of not equal
#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std ;

int main() //Task 5
{
  
  char a = 'A'  , b = 'a';
  cout<<"Difference in 'A' and 'a' in ASCII Value is :" << a-b << endl;
  string str1 , str2  ;
  
  cout<<"Enter a String 1 : " ;
  getline(cin,str1);
  cout<<"Enter a String 2 : " ;
  getline(cin,str2);
 
  int x = str1.compare(str2) ;
  if(x==0)
  {
    cout<<"!!! Strings are Equal !!!"<<endl ;
  }
  else
  {
    cout<<"!!! Strings are NOT Equal & Difference in ASCII Value is : " << x << " !!!"<<endl ;
  }
  /*if(x<0)
  {
    cout<<"!!!Strings are NOT Equal & Difference in ASCII Value is : " << x << " !!!"<<endl ;
  }*/
 return 0 ;
}


#include<bits/stdc++.h>
#include<iostream>
#include<string>
#define MAX 20
using namespace std ;

int main() //Task  2
{
   // Task 2 to Check a string is Palindrome or not
  string str1 ;
  cout<<"Enter a String : " ;
  getline(cin,str1);
  string str2 ;
  string :: reverse_iterator rit;
  for(rit=str1.rbegin();rit!=str1.rend();++rit)
  {
    str2 = str2 + *rit ;
  }
  cout<<"Reverse String is : "<< str2 << endl ;
  cout<<str1.size() << endl ;
  cout<<str2.size() << endl ;
  int x = str1.compare(str2) ;
  (x==0)? cout<<"String is Palindrome "<<endl: cout<<"String is not Palindrome" <<endl ;
 return 0 ;
}




// Task 3 to Reverse a String 
#include<bits/stdc++.h>
#include<iostream>
#include<string>
#define MAX 20
using namespace std ;

int main() //Task  3
{
    
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
  //cout<<str1.size() << endl ;
  //cout<<str2.size() << endl ;
  
 return 0 ;
}


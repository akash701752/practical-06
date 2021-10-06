
#include<bits/stdc++.h>
#include<iostream>
#include<string>
#define MAX 20
using namespace std ;

int main() //Task  2
{
   // Task 2 to Check a string is Palindrome or not
  string str  ;
  cout<<"Enter  String 1     : ";
  cin>> str1 ;
  
  
  string :: iterator it ;
  int i , j = str.end() ,count  = 0  ;
  for(it= str.begin(); it<=str.end();it++)
  {
    if(str[it]==str[j])
    {
      count ++  ;
      j -- ;
    }
  }
  int m = str.end() ;
  if(count==  m)
  {
    cout<<"!!! String is Palindrome !!! " ;
  }
  else
  {
    cout<<"!!! String is NOT Palindrome !!! " ;
  }
  
 return 0 ;
}
/*
 to use getline
 string str1 , str 2;
 while(getchar()!='\n')
 getline(cin,str1);
 getline(cin,str1);
 
 to use palindrome 
 string  :: 



*/




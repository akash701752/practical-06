
#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std ;

int main() //Task  2
{
   // Task 2 to Check a string is Palindrome or not
  string str1   , str2 ;
  cout<<"Enter  String 1     : ";
  cin>> str1 ;
  //cout<<"Enter  String 2     : ";
  //cin>> str2 ;
  int i  , j , k = str1.length(), count = 0 ;
  cout<< "String Length is :  " << k << endl  ;
  //if((str1.length())==(str2.length()))
  // {
    for(i=0;i<=k;i++)
    {
      /*for(j=k ; j>=0 ;j--)
      { 
        if(str1[i]==str[j])
        {
          count ++ ;
        }
        /*else
        {
          break ;
        } 
      } */
      if(str1[i]==str1[k])
      {
        count ++ ;
        k -- ;
      }
    }
    if(count==str1.size())
    {
      cout<< "String is Palindrome !! " << endl ;
    }
    else
    {
      cout<< "String is NOT Palindrome !! " << endl ;
    }
 //}
 /*
  else
  {
    cout<< "Both Strings are NOT Palindrome !! " << endl ;
  }
  */
 return 0 ;
}
/*
 to use getline
 char str1 , str 2;
 while(getchar()!='\n')
 getline(cin,str1);
 getline(cin,str1);
*/

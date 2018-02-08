//Author:
#include<iostream>

using namespace std;

int main()
{
  char letter;
  cout<<"What character do you want to know about?\n";
  cin>>letter;

  if(letter>=65 && letter<=90)
  //when user's entry is between A-Z...
  {
  cout<<letter;
  cout<<" is an upper case letter!\n";
  
  }
  
  else if (letter>=97 && letter<=122)
  //when user's entry is between a-z...
  {
  cout<<letter;
  cout<<" is a lower case letter!\n";
  
  }
  else if (letter>=33 && letter<=65)
  //in all other cases...
  {
  cout<<letter;
  cout<<"?! Pssh. What are you talking about?\n";
  
  }
  if (letter>=32 && letter<=122)
  //no matter what they enter...
  {
  cout<<"The ASCII value is: ";
  cout<<(int)letter<<endl;
  }
  return 0;
}

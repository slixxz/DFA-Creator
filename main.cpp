#include "DFA_Generator.h"

int main()
{
  DFA_Generator *DFA = new DFA_Generator();
  ////////////////////////////////////////////////////////////////
  ///////////  intro   /////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////
  cout << "Welcome to my program that will take in your description "
       << "of a langauage and and return the DFA/transition table for "
       << "the describtion you have given. Please follow the dirictions "
       << "to input your desired language to convert to a DFA. " << endl <<endl;
  ////////////////////////////////////////////////////////////////////////////
  ////collect data and call function to create DFA////////////////////////////
  ////////////////////////////////////////////////////////////////////////////
  DFA->user_Choice_Set();
  
  cout << "Goodbye" <<endl;
  return 0;
}



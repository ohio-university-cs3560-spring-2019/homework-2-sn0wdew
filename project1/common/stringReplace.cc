/*
*
* Program:        stringReplace.cc
*
* Author:         Michael Snider
* Email:          ms052916@ohio.edu
*
* Description:    This is the implementation file for the function library
*                 stringReplace.h
*
* Date:           January 28th, 2019
*
*/

#include <iostream>

using namespace std;

bool verifyInput(const int& argc){
  if (argc != 3){
    cerr << "Invalid Input." << endl
         << "Please enter: \"text1\" \"text2\" < file1.txt > file2.txt" << endl;
    return false;
  }
  return true;
}

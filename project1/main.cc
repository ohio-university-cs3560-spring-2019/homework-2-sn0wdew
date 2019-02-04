/*
*
* Program:        main.cc
*
* Author:         Michael Snider
* Email:          ms052916@ohio.edu
*
* Description:    This program takes a string from the command line and replaces
*                 the specified file with a new string from the command line.
*
* Date:           January 28th, 2019
*
*/

#include "stringReplace.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {

  // Verify Input fformatting is Correct
  if (!verifyInput(argc)) return 0;

  // Declare Variables
  string tempLine;
  string findText = argv[1];
  string replaceText = argv[2];
  size_t found;

  // Get the first line from input file.
  getline(cin, tempLine);

  // Check if file is empty
  while (!cin.eof()){

    // Find the position of the string findText
    found = tempLine.find(findText);

    while (found != string::npos){
      // replace instance of findText with replaceText
      tempLine.replace(found, findText.length(), replaceText);

      // check for new instance of findText after the previous found location
      found = tempLine.find(findText, found + replaceText.length());
    }

    // output modified tempLine to file
    cout << tempLine << endl;

    // get a new line
    getline(cin, tempLine);
  }

return 0;
}

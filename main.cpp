// This file should implement the game using a custom implementation of a BST (that is based on your implementation from lab02)
#include <iostream>
#include <fstream>
#include <string>
#include "card.h"
#include "card_list.h"
// Do not include set in this file

using namespace std;

int main(int argc, char* argv[]) {
  if(argc < 3){
    cout << "Please provide 2 file names" << endl;
    return 1;
  }

  ifstream cardFile1(argv[1]);
  ifstream cardFile2(argv[2]);
  string line;

  if (cardFile1.fail() || cardFile2.fail()) {
    cout << "Could not open file " << argv[2];
    return 1;
  }

  //Read each file
  while (getline(cardFile1, line) && (line.length() > 0)) {

  }

  cardFile1.close();


  while (getline(cardFile2, line) && (line.length() > 0)) {

  }

  cardFile2.close();

  return 0;
}

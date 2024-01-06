#include <iostream>
#include <ostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <vector>
#include <chrono>

#include "BookReader.h"

using namespace chrono;

int main()
{
  cout << "--------------------------------------------------" << endl;
  cout << "|\tWAR AND PEACE " << endl;
  cout << "|\t\tBy Leo Tolstoy/Tolstoi" << endl;
  cout << "--------------------------------------------------" << endl << endl;
  
  high_resolution_clock::time_point start, end;

  cout << "Reading book..." << endl;
  start = high_resolution_clock::now();
  BookReader bookReader("WAR AND PEACE.txt");
  end = high_resolution_clock::now();

  cout << "Time taken to read book : " << duration_cast<milliseconds>(end - start).count() << " milliseconds" << endl;

  // Menu loop
  int choice;
  string word;
  vector<unsigned long> lines;
  do {
    cout << "--------------------------------------------------" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Show dictionary" << endl;
    cout << "2. Get word count" << endl;
    cout << "3. Find word" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    switch (choice) {
      case 0:
        break;
      case 1:
        bookReader.showDictionary();
        break;
      case 2:
        cout << "Enter word: ";
        cin >> word;
        cout << "Word count: " << bookReader.getWordCount(word) << endl;
        break;
      case 3:
        cout << "Enter word: ";
        cin >> word;
        lines = bookReader.getWordLines(word);
        if (lines.empty())
          cout << "Word not found" << endl;
        else {
          cout << "Word found on lines: ";
          for (auto &line : lines)
            cout << line << " - ";
          cout << endl;
        }
        break;
      default:
        cout << "Invalid choice" << endl;
    }
  } while (choice != 0);

  return 0; 
}
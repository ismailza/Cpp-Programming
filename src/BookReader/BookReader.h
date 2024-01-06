#ifndef BOOKREADER_H
#define BOOKREADER_H

using namespace std;

class BookReader
{
  private:
    ifstream book;
    map<string, vector<unsigned long>> dictionary;
    
    string wordCleaner(string &word);

  public:
    BookReader(const string &);
    ~BookReader();
    void showDictionary();
    unsigned long getWordCount(const string &);
    vector<unsigned long> getWordLines(const string &);
};

BookReader::BookReader(const string &filename)
{
  book.open(filename);
  if (!book.is_open())
    throw "Error opening file " + filename;
  string line, word;
  for (unsigned long lineNum = 1; getline(book, line); lineNum++) {
    istringstream iss(line);
    while (iss >> word) {
      word = wordCleaner(word);
      if (!word.empty())
        dictionary[word].push_back(lineNum);
    }
  }
}

BookReader::~BookReader()
{
  if (book.is_open())
    book.close();
}

string BookReader::wordCleaner(string &word)
{
  transform(word.begin(), word.end(), word.begin(), ::tolower);
  if (!word.empty()) {
    while (!word.empty() && !isalnum(word.front()))
      word.erase(0, 1);
    while (!word.empty() && !isalnum(word.back()))
      word.pop_back();
  }
  return word;
}

void BookReader::showDictionary()
{
  for (auto &word : dictionary) {
    cout << word.first << ": ";
    for (auto &line : word.second)
      cout << line << " - ";
    cout << endl;
  }
}

unsigned long BookReader::getWordCount(const string &word)
{
  return dictionary[word].size();
}

vector<unsigned long> BookReader::getWordLines(const string &word) {
  if (dictionary.find(word) != dictionary.end())
    return dictionary[word];
  return {};
}



#endif // BOOKREADER_H
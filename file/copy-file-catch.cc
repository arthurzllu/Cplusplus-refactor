#include <iostream>
#include <fstream>
using namespace std;

int main(void)
{
  ifstream ifile;
  ofstream ofile;
  ifile.exceptions(ifstream::badbit | ifstream::failbit);

  try {
    ofile.open("text_file1");
    for (int i = 0; i < 10; i++)
      ofile << '1';
    ofile.close();

    ofile.open("text_file2");
    for (int i = 0; i < 20; i++)
      ofile << '2';
    ofile.close();

    ifile.open("text_file3");
    // should be text_file1
    ofile.open("text_file2");
    char c;
    while (ifile >> c)
      ofile << c;
    ifile.close();
    ofile.close();

    ifile.open("text_file2");
    while (ifile >> c) 
      cout << c;
    ifile.close();
  }
  catch (const ios_base::failure &e) {
    cout << e.what() << endl;
  }
  return 0;
}

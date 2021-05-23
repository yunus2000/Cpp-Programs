#include <iostream>    //for cout
#include <fstream>     // for ofstream/ifstream
#include <string>     //for << and getline

//int main()
int main(int argc, char *argv[])
{
 std::cout << "There are " << argc << " arguments." << std::endl;
 for (int i = 0; i != argc; ++i)
 {
  std::cout << argv[i] << std::endl;
 }

 //std::string in_file = "test.txt";
 std::string in_file = argv[1];
 std::ifstream input_file(in_file.c_str());

 //std::string out_file = "test.txt";
 std::string out_file = argv[1];
 out_file += ".out"; //output file name test.txt.out
 std::ofstream output_file(out_file.c_str());

 std::string line;
 for (int line_no = 1; std::getline(input_file, line); ++line_no)
 {
  std::cout << "LINE " << line_no << ":" << line << std::endl;
  output_file << "LINE " << line_no << ":" << line << std::endl;
 }

 if (input_file)
 {
  input_file.close();
  output_file.close();
 }
 std::cin.get();
 return 0;
}

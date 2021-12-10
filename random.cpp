#include <fstream>
#include <cstdlib>
#include <random>
#include <string>

void print_random_numbers(int seed, int n, const std::string & fname);

int main(int argc, char *argv[])
{
  const int SEED = std::atoi(argv[1]); // read first arg
  const int N = std::atoi(argv[2]); // read second arg

  print_random_numbers(SEED, N, "datos.txt");

  return 0;
}

void print_random_numbers(int seed, int n, const std::string & fname)
{
  std::ofstream fout(fname, std::ios::out); // open file to write
  fout.precision(15); fout.setf(std::ios::scientific); // set format

  // fiil here
  // to print a number to the file, use it just as cout
  // fout << number << "\n";

  // close the file
  fout.close();
}

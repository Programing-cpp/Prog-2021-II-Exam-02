#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>

bool is_idempotent(const std::vector<double> &  M, const double eps);

int main(int arg, char *argv[])
{
  const int N = 4;
  const double EPS = std::atof(argv[1]);
  std::vector<double> A = {1.99, -2.01, -4,
  -1, 2.999, 4,
  0.999, -2, -3.01};
  std::cout << is_idempotent(A, EPS) << std::endl;

  return 0;
}
bool is_idempotent(const std::vector<double> &  M, const double eps)
{
  fill here and delete this line
  // calcule A*A, puede crear una nueva matriz
  // haga la resta  A*A - A, para  ir comparando cada elemento.
  //   calcule la diferencia comparando con cero
  //   retorne true o false de acuerdo a lo anterior
}

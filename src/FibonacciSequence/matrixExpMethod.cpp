#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;
using namespace boost::multiprecision;

/**
 * @brief Multiplie deux matrices représentées par des vecteurs de vecteurs de cpp_int.
 * @param matrix1 La première matrice à multiplier.
 * @param matrix2 La deuxième matrice à multiplier.
 * @return La matrice résultante de la multiplication.
 * @details Cette fonction prend deux matrices représentées par des vecteurs de vecteurs de cpp_int
 * et effectue une multiplication matricielle pour produire une nouvelle matrice résultante.
 */
vector<vector<cpp_int>> multiplyMatrix(const vector<vector<cpp_int>> &matrix1, const vector<vector<cpp_int>> &matrix2)
{
  int rows1 = matrix1.size();
  int cols1 = matrix1[0].size();
  int cols2 = matrix2[0].size();

  vector<vector<cpp_int>> result(rows1, vector<cpp_int>(cols2, 0));

  for (int i = 0; i < rows1; ++i)
    for (int j = 0; j < cols2; ++j)
      for (int k = 0; k < cols1; ++k)
        result[i][j] += matrix1[i][k] * matrix2[k][j];

  return result;
}

/**
 * @brief Calcule la puissance n d'une matrice donnée.
 * @param matrix La matrice à laquelle appliquer la puissance.
 * @param n L'exposant pour la puissance.
 * @return La matrice résultante après avoir été élevée à la puissance n.
 * @details Cette fonction utilise une approche récursive pour calculer la puissance d'une matrice.
 */
vector<vector<cpp_int>> powerMatrix(const vector<vector<cpp_int>> &matrix, int n)
{
  int size = matrix.size();

  if (n == 1)
    return matrix;
  
  if (n % 2 == 0)
  {
    vector<vector<cpp_int>> halfPower = powerMatrix(matrix, n / 2);
    return multiplyMatrix(halfPower, halfPower);
  }
  vector<vector<cpp_int>> halfPower = powerMatrix(matrix, (n - 1) / 2);
  return multiplyMatrix(multiplyMatrix(halfPower, halfPower), matrix);
}

/**
 * @brief Calcule le n-ième nombre de Fibonacci à l'aide de la méthode des matrices.
 * @param n L'indice du nombre de Fibonacci à calculer.
 * @return Le n-ième nombre de Fibonacci.
 * @details Cette fonction utilise la méthode des matrices pour calculer efficacement
 * le n-ième nombre de Fibonacci en élevant une matrice spécifique à la puissance (n - 1).
 */
cpp_int fibonacci(int n)
{

  if (n == 0)
    return 0;
  if (n == 1)
    return 1;

  vector<vector<cpp_int>> fibMatrix = {{1, 1}, {1, 0}};

  vector<vector<cpp_int>> resultMatrix = powerMatrix(fibMatrix, n - 1);

  return resultMatrix[0][0];
}


int main()
{
  int n;
  cout << "Enter the number of terms of Fibonacci sequence you want to see: ";
  cin >> n;

  high_resolution_clock::time_point start, end;

  // Calcul avec la méthode de matrice exponentielle
  start = high_resolution_clock::now();
  cout << fibonacci(n) << endl;
  end = high_resolution_clock::now();
  cout << "Time taken by Matrix Exponentiation Method: " << duration_cast<milliseconds>(end - start).count() << " milliseconds" << endl;

  return 0;
}
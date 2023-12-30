#include <iostream>
#include <chrono>
#include <vector>

using namespace std;
using namespace chrono;

/**
 * @brief Calcule le n-ième terme de la suite de Fibonacci de manière récursive.
 * @param n Le terme de la suite de Fibonacci à calculer.
 * @return La valeur du n-ième terme de la suite de Fibonacci.
 * @details Cette fonction calcule le n-ième terme de la suite de Fibonacci de manière récursive.
 * Elle utilise la définition classique de la suite, où chaque terme est la somme des deux termes 
 * précédents (F(n) = F(n-1) + F(n-2)).
 */
unsigned long long fibonacciRecursive(int n)
{
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

/**
 * @brief Calcule le n-ième terme de la suite de Fibonacci de manière itérative.
 * @param n Le terme de la suite de Fibonacci à calculer.
 * @return La valeur du n-ième terme de la suite de Fibonacci.
 * @details Cette fonction calcule le n-ième terme de la suite de Fibonacci de manière itérative, 
 * en utilisant une boucle for pour calculer les valeurs successives jusqu'au n-ième terme.
 */
unsigned long long fibonacciIterative(int n)
{
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  unsigned long long val1 = 0;
  unsigned long long val2 = 1;
  unsigned long long result = 0;
  for (int i = 2; i <= n; i++)
  {
    result = val1 + val2;
    val1 = val2;
    val2 = result;
  }
  return result;
}

/**
 * @brief Génère les n premiers termes de la suite de Fibonacci.
 * @param n Le nombre de termes de la suite de Fibonacci à générer.
 * @return Un vecteur contenant les n premiers termes de la suite de Fibonacci.
 * @details Cette fonction génère les n premiers termes de la suite de Fibonacci 
 * et les stocke dans un vecteur. Si n est inférieur à zéro, elle affiche un message 
 * d'erreur et quitte le programme. Si n est égal à zéro, elle renvoie un vecteur vide. 
 * Elle remplit le vecteur avec les valeurs de la suite jusqu'au n-ième terme.
 */
vector<unsigned long long> fibonacciSequence(int n)
{
  vector<unsigned long long> fibonacci;
  if (n < 0)
  {
    cout << "Invalid input" << endl;
    exit(1);
  }
  if (n == 0)
    return fibonacci;
  fibonacci.push_back(1);
  if (n == 1)
    return fibonacci;
  fibonacci.push_back(1);
  for (int i = 2; i < n; i++)
    fibonacci.push_back(fibonacci[i - 1] + fibonacci[i - 2]);

  return fibonacci;
}

/**
 * @brief Affiche les termes de la suite de Fibonacci.
 * @param fibonacci Le vecteur contenant les termes de la suite de Fibonacci.
 * @details Cette fonction affiche les termes de la suite de Fibonacci qui sont stockés dans le 
 * vecteur passé en paramètre.
 */
void displayFibonacciSequence(vector<unsigned long long> fibonacci)
{
  for (int i = 0; i < fibonacci.size(); i++)
    cout << fibonacci[i] << " ";
  cout << endl;
}

/**
 * @brief Récupère la valeur du n-ième terme de la suite de Fibonacci.
 * @param fibonacci Le vecteur contenant les termes de la suite de Fibonacci.
 * @param n Le terme de la suite de Fibonacci à récupérer.
 * @return La valeur du n-ième terme de la suite de Fibonacci.
 * @details Si le vecteur passé ne contient pas assez de termes, cette fonction génère d'abord les 
 * termes manquants à l'aide de fibonacciSequence puis renvoie la valeur du n-ième terme.
 */
unsigned long long getFibonacciValue(vector<unsigned long long> fibonacci, int n)
{
  if (fibonacci.size() < n)
    fibonacci = fibonacciSequence(n);
  return fibonacci[n - 1];
}


int main()
{
  int n;
  cout << "Enter the number of terms of Fibonacci sequence you want to see: ";
  cin >> n;

  high_resolution_clock::time_point start, end;

  // Calcul avec la méthode itérative
  cout << "Fibonacci iterative: ";
  start = high_resolution_clock::now();
  cout << fibonacciIterative(n) << endl;
  end = high_resolution_clock::now();
  cout << "Time taken by iterative method: " << duration_cast<milliseconds>(end - start).count() << " milliseconds" << endl;

  // Calcul avec la méthode récursive
  cout << "Fibonacci recursive: ";
  start = high_resolution_clock::now();
  cout << fibonacciRecursive(n) << endl;
  end = high_resolution_clock::now();
  cout << "Time taken by recursive method: " << duration_cast<milliseconds>(end - start).count() << " milliseconds" << endl;

  // Calcul avec la génération des termes de la suite
  start = high_resolution_clock::now();
  vector<unsigned long long> fibonacci = fibonacciSequence(n);
  end = high_resolution_clock::now();
  cout << "Time taken by sequence generation: " << duration_cast<milliseconds>(end - start).count() << " milliseconds" << endl;

  cout << "Last Fibonacci number: " << getFibonacciValue(fibonacci, n) << endl;

  return 0;
}

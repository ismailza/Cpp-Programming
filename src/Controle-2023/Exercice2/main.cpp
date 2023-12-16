#include <iostream>
#include <queue>
#include <stack>

using namespace std;

/**
 * @breif: Trie une file d'entiers triés par valeure absolue en la modifie pour qu'elle soit triée par ordre croissant
 * @param: Q: file d'entiers triés par valeure absolue
 * @return: file d'entiers triés par ordre croissant
 * @example: Q = {1, -2, 3, -5, 7} => nouveau_trie(Q) = {-5, -2, 1, 3, 7}
 * @details:
 * - Si la file est vide on la retourne
 * - On crée une pile pour stocker les entiers négatifs et une file pour stocker les entiers positifs
 * - On parcours la file Q et on stocke les entiers négatifs dans la pile et les entiers positifs dans la file
 * - On vide la pile dans la file Q
 * - On vide la file dans la file Q
 * - On retourne la file Q
*/
queue<int> &nouveau_trie(queue<int> &Q)
{
  if (Q.empty())
    return Q;
  queue<int> *positives = new queue<int>();
  stack<int> *negatives = new stack<int>();
  while (!Q.empty())
  {
    if (Q.front() >= 0)
      positives->push(Q.front());
    else
      negatives->push(Q.front());
    Q.pop();
  }
  while (!negatives->empty())
  {
    Q.push(negatives->top());
    negatives->pop();
  }
  while (!positives->empty())
  {
    Q.push(positives->front());
    positives->pop();
  }
  delete negatives;
  delete positives;

  return Q;
}

int main()
{
  queue<int> *Q = new queue<int>();
  Q->push(1);
  Q->push(-2);
  Q->push(3);
  Q->push(-5);
  Q->push(7);

  nouveau_trie(*Q);

  while (!Q->empty())
  {
    cout << Q->front() << " ";
    Q->pop();
  }

  return 0;
}
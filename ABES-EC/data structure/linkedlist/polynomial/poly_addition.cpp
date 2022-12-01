#include "phll.h"
struct node *polysubll(struct node **p1, struct node **p2) {
  struct node *poly3, *p, *q;
  p = *p1;
  q = *p2;
  poly3 = NULL;
  while (p != NULL && q != NULL) {
    if (p->exp == q->exp) {
      insend(&poly3, p->coff + q->coff, p->exp);
      p = p->next;
      q = q->next;
    } else {
      if (p->exp > q->exp) {
        insend(&poly3, p->coff, p->exp);
        p = p->next;
      } else {
        insend(&poly3, q->coff, q->exp);
        q = q->next;
      }
    }
  }
  while (p != NULL) {
    insend(&poly3, p->coff, p->exp);
    p = p->next;
  }
  while (q != NULL) {
    insend(&poly3, q->coff, q->exp);
    q = q->next;
  }
  return poly3;
}
int main() {
  struct node *poly1 = NULL;
  struct node *poly2 = NULL;
  insbeg(&poly1, 3, 1);
  insbeg(&poly1, 3, 3);
  insbeg(&poly1, 4, 4);
  insbeg(&poly1, 6, 5);
  insbeg(&poly2, 6, 2);
  insbeg(&poly2, 5, 3);
  insbeg(&poly2, 4, 4);
  cout << "polynomial 1:  ";
  traverse(&poly1);
  cout << endl;
  cout << "polynomial 2:  ";
  traverse(&poly2);
  cout << endl;
  cout << "polynomials after addition:  ";
  poly1 = polyaddll(&poly1, &poly2);
  traverse(&poly1);
  cout << endl;
  poly1 = polysubll(&poly1, &poly2);
  traverse(&poly1);
  cout << endl;
  return 0;
}
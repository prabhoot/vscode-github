#include <iostream>
using namespace std;
#define N 4
void tower_of_Hanoi(int n, char from_rod, char to_rod,
				char aux_rod)
{
	if (n == 1) {
		cout<<"s->d"<<endl;
	}
	else{tower_of_Hanoi(n - 1, from_rod, aux_rod, to_rod);
	cout << "Move disk " << n << " from rod " << from_rod
		<< " to rod " << to_rod << endl;
	tower_of_Hanoi(n - 1, aux_rod, to_rod, from_rod);
}}
int main()
{
	tower_of_Hanoi(N, 'A', 'C', 'B');
	return 0;
}

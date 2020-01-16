/* 1. Компютъра си измисля случайно число от 1 до 100.
   2. Ти се опитваш да го познаеш.
   3. След всеки опит ти казва дали си познал, или числото е по - голямо или по - малко от това, което си предположил.
   4. Брои опитите и ако направиш повече от 6, губиш.
   5. А, и при всяко отгатване да имаш начин да се откажеш и да губиш играта веднага.*/

#include <iostream>
using namespace std;

int main(){
	int t = 0; //number of times the player tried to win
	int r; //the random number
	int v; //the players number
	int o = 1; //choise to surrender

	while (t < 6, o==1) {
		t++;
		r = rand() % 100 + 1; //gets random number from 1 to 100 
		cout << "Enter a number \n";
		cin >> v; //enters a number
		if (r > v) {
			cout << "Your number is smaller, try again. \n";
		}
		if (r < v) {
			cout << "Your number is higher, try again. \n";
		}
		if (r == v) {
			cout << "Numbers are equal. You win. \n";
			return 0;
		}
		if (o == 1) {
			cout << "Do you want to surrender? Press 0 for 'yes' and 1 for 'no' \n";
			cin >> o;
		}
		if (t == 6) {
			cout << "You lost";
			return 0;
		}
	}		
}
	
	
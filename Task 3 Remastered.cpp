/* 1. Let the computer generate a random number from 1 to 100
   2. Try guessing it
   3. After each try the program should tell you if the number you guessed is bigger or smaller
   4. You have to have only 6 tries after you do the sixth one you lose the game
   5. After each try to guess the randomly generated number you have the option to surrender and leave the game
   6. if the number the player inputed isn't between 1 and 100 the system returns the player back and makes him input a valid number*/

#include <iostream>
using namespace std;

int main() {
	int exit_or_new_game_option = 0;
	int surrender_option = 1;
	int games_count = 0;
	int player_number;
	int random_number;
	random_number = rand() % 100 + 1; //gets random number from 1 to 100

	cout << "HELLO PLAYER! Your mission is to guess the number the computer thought of in 6 turns. " << endl;
	cout << "If you fail to guess the number in 6 turns you lose and you can start over. " << endl;
	cout << "\nPress 0 for a NEW GAME or 1 to EXIT: " << endl;

	while (exit_or_new_game_option == 0) {
		cin >> exit_or_new_game_option;
		while (exit_or_new_game_option < 0 || exit_or_new_game_option > 1) {
			cout << "Input a valid choice: " << endl;
			cin >> exit_or_new_game_option;
		}
		if (exit_or_new_game_option == 1) {
			cout << "\nGood bye! " << endl;
			return 0;
		}	
		cout << "Press 0 to surrender anytime you like " << endl;
		while (surrender_option == 1) {
			if (games_count == 6) {
				cout << "You lost all of your turns. " << endl;
			}
			cout << "Write down a number from 1 to 100: " << endl;
			while (games_count < 6) {
				games_count++;
				cin >> player_number;
				while (player_number >= 0 || player_number <= 0) {
					if (player_number > random_number && player_number <= 100) {
						if (games_count == 6) {
							cout << "YOU LOST!" << endl;
							cout << "Press 0 for a NEW GAME, to EXIT press 1" << endl;
							cin >> exit_or_new_game_option;
							while (exit_or_new_game_option < 0 || exit_or_new_game_option > 1) {
								cout << "Input a valid choice" << endl;
								cin >> exit_or_new_game_option;
							}
							if (exit_or_new_game_option == 1) {
								cout << "\nGood bye!" << endl;
								return 0;
							}
							if (exit_or_new_game_option == 0) {
								games_count = 0;
								cout << "You started a new game\nEnter a new number: " << endl;
								break;
							}
						}	
						cout << "The number you chose is too high. " << endl;
						break;
					}
					if (player_number < random_number && player_number > 0) {
						if (games_count == 6) {
							cout << "YOU LOST!" << endl;
							cout << "Press 0 for a NEW GAME, to EXIT press 1" << endl;
							cin >> exit_or_new_game_option;
							while (exit_or_new_game_option < 0 || exit_or_new_game_option > 1) {
								cout << "Input a valid choice" << endl;
								cin >> exit_or_new_game_option;
							}
							if (exit_or_new_game_option == 1) {
								cout << "\nGood bye!" << endl;
								return 0;
							}
							if (exit_or_new_game_option == 0) {
								games_count = 0;
								cout << "You started a new game\nEnter a new number: " << endl;
								break;
							}
						}						
						cout << "The number you chose is too low. " << endl;
						break;
					}
					if (player_number == random_number) {
						cout << "YOU WIN!" << endl;
						cout << "Press 0 for a NEW GAME, to EXIT press 1" << endl;
						cin >> exit_or_new_game_option;
						if (exit_or_new_game_option == 1) {
							cout << "\nGood bye!" << endl;
							return 0;
						}
						if (exit_or_new_game_option == 0)
							games_count = 0;
						cout << "You started a new game\nEnter a new number: " << endl;
						break;
					}
					if (player_number < 0 || player_number > 100) {
						games_count = games_count - 1;
						cout << "Enter a valid number" << endl;
						break;
					}
					if (exit_or_new_game_option == 0) {
						cout << "Press 0 for a NEW GAME, to EXIT press 1" << endl;
						cin >> exit_or_new_game_option;
						if (exit_or_new_game_option == 1) {
							cout << "\nGood bye!" << endl;
							return 0;
						}
						if (exit_or_new_game_option == 0) {
							games_count = 0;
							cout << "You started a new game\nEnter a new number: " << endl;
							break;
						}
					}	
				} 
			}
		}
	}
}
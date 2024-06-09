#include <iostream>
#include <string>
using namespace std;

int main() {
	string answer, options[3] = { "rock","paper","scissors" };
	srand(static_cast<unsigned int>(time(0)));
	int CPU = rand() % 3, player;
	cout << "Rock Paper or Scissors?" << endl;
	cin >> answer;
	if (answer == "rock")
		player = 0;
	else if (answer == "paper")
		player = 1;
	else if (answer == "scissors")
		player = 2;
	else {
		cout << "Invalid! Please fix your response and try again";
		return 0;
	}
	cout << CPU << endl;
	if (CPU > player) {
		if (CPU == 2 && player == 0)
			cout << "You won!" << options[player] << " beats " << options[CPU] << "!" << endl;
		else if (CPU == 1)
			cout << "You lost." << options[CPU] << " beats " << options[player] << "." << endl;
		else
			cout << "You lost." << options[CPU] << " beats " << options[player] << "." << endl;
	}
	else if (player > CPU) {
		if (player == 2 && CPU == 0)
			cout << "You lost." << options[CPU] << " beats " << options[player] << "." << endl;
		else if (CPU == 1)
			cout << "You won!" << options[player] << " beats " << options[CPU] << "!" << endl;
		else
			cout << "You won!" << options[player] << " beats " << options[CPU] << "!" << endl;
	}
	else {
		cout << "Its a draw!" << options[player] << " is the same as " << options[CPU] << "!" << endl;
	}
}
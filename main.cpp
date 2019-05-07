#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

#include "InputParser.h"
#include "Game.h"

#define LOG(x) std::cout << (x) << "\n";


/*                 COMPARE FILES                */
bool compare_files(const std::string& filename1, const std::string& filename2)
{
	std::ifstream file1(filename1, std::ifstream::ate | std::ifstream::binary);
	std::ifstream file2(filename2, std::ifstream::ate | std::ifstream::binary);
	const std::ifstream::pos_type fileSize = file1.tellg();

	if (fileSize != file2.tellg()) {
		return false;
	}

	file1.seekg(0);
	file2.seekg(0);

	std::istreambuf_iterator<char> begin1(file1);
	std::istreambuf_iterator<char> begin2(file2);

	return std::equal(begin1, std::istreambuf_iterator<char>(), begin2);
}


/*                  PRINT BOARD                 */
void Game::gridWithClass() { board.printBoardwithClass(); }


int main(void) {
	
	/*              GENERATE STREAMS              */
	std::fstream testinp;
	std::fstream test;

	/*            HOW MANY TEST CASES?            */
	int tC = 3;

	/*               CREATE OUTPUTS               */
	for (int i = 0; i < tC; i++) {
		testinp.open("testCases/input" + std::to_string(i) + ".txt");
		test.open("testCases/yourOutput" + std::to_string(i) + ".txt");

		int maxTurns;

		std::streambuf *cinBuffer = std::cin.rdbuf();
		std::streambuf *coutBuffer = std::cout.rdbuf();

		std::cin.rdbuf(testinp.rdbuf());
		std::cout.rdbuf(test.rdbuf());

		std::cin >> maxTurns;

		Game* game = InputParser::parseGame();

		while (!(game->isGameEnded()))
			game->playTurn();
		game->gridWithClass();

		testinp.close();
		test.close();

		std::cin.rdbuf(cinBuffer);
		std::cout.rdbuf(coutBuffer);
	}

	/*               CHECK OUTPUTS                */
	for(int i = 0; i < tC; i++) {
		std::cout << "Testcase " << i << ": ";
		if (compare_files("testCases/yourOutput" + std::to_string(i) + ".txt", "testCases/output" + std::to_string(i) + ".txt")) {
			LOG("PASSED.");
		}
		else {
			LOG("FAILED.");
		}
	}

 }
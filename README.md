# PL-HW4-Tester

## Usage - Only on Unix
- Move the files *main.cpp*, *Makefile* and the folder *testCases* into your project file.
- Run:
```bash
make all        #compile
make run        #run
make valgrind   #check memory leak
make clean      #clean after execution
```

## Want to add test cases?
- You **must** create *input**x**.txt*, *output**x**.txt* and *yourOutput**x**.txt* in testCases folder where:
  - x is the next test case number which doesn't appear in the file *testCases*.
  - *input* is the file that includes input specifications.
  - *output* is the file that includes the correct form of output where the code being run is:
  ```c++
  std::cout << "Board with ID" << std::endl;
  board->printBoardwithClass();
  std::cout << "Board with ID" << std::endl;
  board->printBoardwithID();
  while (!game->isGameEnded()) {
	game->playTurn();
	board->printBoardwithClass();
	std::cout << "--------------" << std::endl;
	board->printBoardwithID();
  }
  ```
  - *yourOutput* is the file your output will be written to check validity. If it is not empty, then it will be overwritten.
  - Change the variable *tC* in *main.cpp* to the number of test cases you have.
  
## Want to share your test cases with people?
- Don't hesitate to create a pull request.

## Contributors
- Y. Cahit Yıldırım

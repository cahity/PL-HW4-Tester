# PL-HW4-Tester

## Usage - Only on Unix
- Move the file *main.cpp* and the folder *testCases* into your project file.
- Include the below code into your *Game* classes public scope:

```c++
void gridWithClass();
```
- Run makefile

## Want to add test cases?
- You **must** create *input**x**.txt*, *output**x**.txt* and *yourOutput**x**.txt* in testCases folder where:
  - x is the next test case number which doesn't appear in the file *testCases*.
  - input.txt is the file includes input specifications.
  - output.txt is the file includes the correct form of output where the code being run is:
  ```c++
  while (!(game->isGameEnded()))
			game->playTurn();
		game->gridWithClass();
  ```
  - yourOutput.txt is the file your output will be written to check validity. If it is not empty, then it will be overwritten.
  - Change the variable *tC* in *main.cpp* to the number of test cases you have, i.e *x+1*.
  
## Want to share your test cases with people?
- Don't hesitate to create a pull request.

## Contributors
- Y. Cahit Yıldırım

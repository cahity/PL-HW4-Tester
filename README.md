# PL-HW4-Tester

## Usage
- Move the file *main.cpp* and folder *testCases* into your project file.
- Include the below code into your *Game* classes public scope:

```c++
void gridWithClass();
```
- Run makefile

## Want to add test cases?
- You **must** create *input**x**.txt*, *output**x**.txt* and *yourOutput**x**.txt* in testCases folder where:
  - x is the following test case number.
  - input.txt is the file includes input specifications with a line at the beginning which includes maximum turn number.
  - output.txt is the file includes the correct form of output where the code being run is:
  ```c++
  while (!(game->isGameEnded()))
			game->playTurn();
		game->gridWithClass();
  ```
  - yourOutput.txt is the file your output will be written to check validity. If it is not empty, then it will be overwritten.
  
## Want to share your test cases with people?
- Don't hesitate to create a pull request.

## Contributors
- Y. Cahit Yıldırım

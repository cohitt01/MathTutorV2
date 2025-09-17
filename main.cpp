/***************************************************************
Program......: MathTutorV2
 Programmers..:Cody Hittle
 Date.........:2025/9/17
 GetHub Repo..:https://github.com/cohitt01/MathTutorV2
 Description..:Mathtutor V2 will give you basic math equations for you to practice
               basic math problems.
 **************************************************************/

#include <iostream>
using namespace std;

int main() {
  string userName;
  int userInput;
  int userAnswer;
    cout << "What's your name? :";
    cin >> userName; // collects first name
    cout << "*  Welcome " << userName << " to the The Super Simple Math Tutor  *" << endl; //Greeting
    cout << endl;
    cout << "                PRESS ENTER TO BEGIN" << endl;
    _getwch(); //has person press any key before continuing (found by AI)

    srand(time(NULL));
    int userAwnser;
        cout << rand() % 100 + 1 << " + " << rand() % 100 +1;
        cin >> userAnswer;
    if (userAnswer ==

return 0;
}

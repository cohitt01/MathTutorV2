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

int termain() {
  string userName;
  int userInput;
  int userAnswer;
    cout << "What's your name?:";
    cin >> userName; // collects first name
    cout << "*  Welcome " << userName << " to the The Super Simple Math Tutor  *" << endl; //Greeting
    cout << endl;
    cout << "                PRESS ENTER TO BEGIN" << endl;
    _getwch(); //has person press en key before continuing (found by AI)
        //Failed acual random number Generagtion.
    srand(time(NULL));
    int userAwnser;
    int leftNum = rand() % 100 + 1;
    int rightNum = rand() % 100 + 1;

    cout << leftNum << " + " << rightNum << " = ";
        cin >> userAnswer;
    if(userAnswer == leftNum + rightNum) { //seeing if userAnswer is correct
        cout << userAnswer << " is correct." << endl;
        cout << endl;
        cout << "Lets do another." << endl;
        cout << leftNum << " + " << rightNum << " =";
    }
    else {          //if userAnswer wrong
        cout << userAnswer << " is incorrect" << endl;
        cout << "Correct Answer is " << leftNum + rightNum << endl;
        cout << "Lets do another to practice." << endl;
    }

return 0;
}

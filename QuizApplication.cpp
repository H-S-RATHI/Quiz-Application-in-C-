#include <iostream>

#include <iostream>
#include <string.h>

using namespace std;
int playQuiz()
{
    char c, option;
    int score = 0;

    cout << "\t\t\t\t\t--------------------WELCOME--------------------" << endl;
    cout << "\t\t\t\t\t--------Plese Follow These Instruction---------" << endl;
    cout << "\t\t\t\t\t1) Quiz contains total  10 questions " << endl;
    cout << "\t\t\t\t\t2) You will be given 1 marks for each write answer"
         << endl;
    cout << "\t\t\t\t\t3) There is no negetive marking " << endl;
    cout << "\t\t\t\t\t4) All are multipile choice Question, Select the correct "
            "answer."
         << endl;
    cout << "\t\t\t\t\t5) You have to score minmum 6 marks to Pass tthe Quiz."
         << endl;
    cout << "\n\n\n\t\t\t\t\t===Please press s to start the Quiz===\t";
    cin >> c;

    if (c == 's' || c == 'S')
    {
        cout << "\t\t\t\t\tQ1. What is the capital of India?" << endl;
        cout << "\t\t\t\t\t(a) Delhi\n\t\t\t\t\t(b) Mumbai\n\t\t\t\t\t(c) "
                "Kolkata\n\t\t\t\t\t(d) Indore\n\t\t\t\t\t";
        cin >> option;
        if (option == 'a' || option == 'A')
        {
            score++;
        }
        cout << "\t\t\t\t\tQ2.Who is the Prime Minister of India ?" << endl;
        cout << "\t\t\t\t\t(a) Amit Sahah\n\t\t\t\t\t(b) Yogi\n\t\t\t\t\t(c) Rahul "
                "Gandhi\n\t\t\t\t\t(d) "
                "Narendra Modi\n\t\t\t\t\t";
        cin >> option;
        if (option == 'd' || option == 'D')
        {
            score++;
        }
        cout << "\t\t\t\t\tQ3. What is the National bird of India?" << endl;
        cout << "\t\t\t\t\t(a) Peacock\n\t\t\t\t\t(b) Sparrow\n\t\t\t\t\t(c) "
                "Parrot\n\t\t\t\t\t(d) Crane\n\t\t\t\t\t";
        cin >> option;
        if (option == 'a' || option == 'A')
        {
            score++;
        }
        cout << "\t\t\t\t\tQ4. What is the national animal of India?" << endl;
        cout << "\t\t\t\t\t(a) Elephant\n\t\t\t\t\t(b) Lion\n\t\t\t\t\t(c) "
                "Tiger\n\t\t\t\t\t(d) Cow\n\t\t\t\t\t";
        cin >> option;
        if (option == 'c' || option == 'C')
        {
            score++;
        }
        cout << "\t\t\t\t\tQ5. What is the natinal flower of India?" << endl;
        cout << "\t\t\t\t\t(a) Lotus\n\t\t\t\t\t(b) Rose\n\t\t\t\t\t(c) "
                "SunFlower\n\t\t\t\t\t(d) Lilly\n\t\t\t\t\t";
        cin >> option;
        if (option == 'a' || option == 'A')
        {
            score++;
        }
        cout << "\t\t\t\t\tQ6. What is the Cheif Minister of Uttar Pardesh?"
             << endl;
        cout << "\t\t\t\t\t(a) Adityanath Yogi\n\t\t\t\t\t(b) Modi\n\t\t\t\t\t(c) "
                "Akhelesh\n\t\t\t\t\t(d) Rajnath\n\t\t\t\t\t";
        cin >> option;
        if (option == 'a' || option == 'A')
        {
            score++;
        }
        cout << "\t\t\t\t\tQ7. What is the capital of Uttar Pradesh?" << endl;
        cout << "\t\t\t\t\t(a) Pryagraj\n\t\t\t\t\t(b) Lackhnow\n\t\t\t\t\t(c) "
                "Merrut\n\t\t\t\t\t(d) Bijnor\n\t\t\t\t\t";
        cin >> option;
        if (option == 'b' || option == 'B')
        {
            score++;
        }
        cout << "\t\t\t\t\tQ8. What is the capital of Jharkhand?" << endl;
        cout << "\t\t\t\t\t(a) Ramgarh\n\t\t\t\t\t(b) Ranchi\n\t\t\t\t\t(c) "
                "Palmu\n\t\t\t\t\t(d) Dhanbad\n\t\t\t\t\t";
        cin >> option;
        if (option == 'b' || option == 'B')
        {
            score++;
        }
        cout << "\t\t\t\t\tQ9. Who is the Leader of Congress?" << endl;
        cout << "\t\t\t\t\t(a) Rahul Gandhi\n\t\t\t\t\t(b) Sonia "
                "Gandhi\n\t\t\t\t\t(c) Priyanka Gandhi\n\t\t\t\t\t(d) Rajeev "
                "Gandhi\n\t\t\t\t\t";
        cin >> option;
        if (option == 'a' || option == 'A')
        {
            score++;
        }
        cout << "\t\t\t\t\tQ10. What is the capital of Haryana?" << endl;
        cout << "\t\t\t\t\t(a) Hisar\n\t\t\t\t\t(b) Rohtak\n\t\t\t\t\t(c) "
                "Chandigarh\n\t\t\t\t\t(d) Panipat \n\t\t\t\t\t";
        cin >> option;
        if (option == 'c' || option == 'C')
        {
            score++;
        }
    }
    else
    {
        cout << "\t\t\t\t\tYou have Entered Invalid Value\n\t\t\t\t\t";
    }
    return score;
}

int main()
{
    char playAgain;

    do
    {
        int score = playQuiz();
        cout << "\n\t\t\t\t\t------------------------\n";
        cout << "\t\t\t\t\tQuiz completed!\n";
        cout << "\t\t\t\t\tYour score: " << score << "/10\n";
        if (score >= 6)
        {
            cout << "\t\t\t\t\tCongratulations! You passed the quiz.\n";
        }
        else
        {
            cout << "\t\t\t\t\tSorry! You did not pass the quiz.\n";
        }
        cout << "\t\t\t\t\t------------------------\n";

        cout << "\t\t\t\t\tDo you want to play again? (Y/N): \n\t\t\t\t\t";
        cin >> playAgain;
        cout << endl;

    } while (playAgain == 'Y' || playAgain == 'y');

    cout << "\t\t\t\t\tThank you for playing the quiz. Goodbye!\n";

    return 0;
}

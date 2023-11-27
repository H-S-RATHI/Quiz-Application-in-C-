#include <iostream>
#include <string.h>


using namespace std;
int playQuiz(){
    char c,option;
    int score=0;

    cout<<"--------------------WELCOME--------------------"<<endl;
    cout<<"--------Plese Follow These Instruction---------"<<endl;
    cout<<"1) Quiz contains total  10 questions "<<endl;
    cout<<"2) You will be given 1 marks for each write answer"<<endl;
    cout<<"3) There is no negetive marking "<<endl;
    cout<<"4) All are multipile choice Question, Select the correct answer."<<endl;
    cout<<"5) You have to score minmum 6 marks to Pass tthe Quiz."<<endl;
    cout<<"\n\n\n===Please press s to start the Quiz==="<<endl;
    cin>>c;
    
    if (c=='s' || c=='S'){
        cout<<"Q1. What is the capital of India?"<<endl;
        cout<<"(a) Delhi\n(b) Mumbai\n(c) Kolkata\n(d) Indore"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score++;
        }
        cout<<"Q2.Who is the Prime Minister of India ?"<<endl;
        cout<<"(a) Amit Sahah\n(b) Yogi\n(c) Rahul Gandhi\n(d) Narendra Modi"<<endl;
        cin>>option;
        if(option=='d' || option=='D'){
            score++;
        }
        cout<<"Q3. What is the National bird of India?"<<endl;
        cout<<"(a) Peacock\n(b) Sparrow\n(c) Parrot\n(d) Crane"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score++;
        }
        cout<<"Q4. What is the national animal  of India?"<<endl;
        cout<<"(a) Elephant\n(b) Lion\n(c) Tiger\n(d) Cow"<<endl;
        cin>>option;
        if(option=='c' || option=='C'){
            score++;
        }
        cout<<"Q5. What is the natinal flower of India?"<<endl;
        cout<<"(a) Lotus\n(b) Rose\n(c) SunFlower\n(d) Lilly"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score++;
        }
        cout<<"Q6. What is the Cheif Minister of Uttar Pardesh?"<<endl;
        cout<<"(a) Adityanath Yogi\n(b) Modi\n(c) Akhelesh\n(d) Rajnath"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score++;
        }
        cout<<"Q7. What is the capital of Uttar Pradesh?"<<endl;
        cout<<"(a) Pryajraj\n(b) Lackhnow\n(c) Merrut\n(d) Bijnor"<<endl;
        cin>>option;
        if(option=='b' || option=='B'){
            score++;
        }
        cout<<"Q8. What is the capital of Jharkhand?"<<endl;
        cout<<"(a) Ramgarh\n(b) Ranchi\n(c) Palmu\n(d) Dhanbad"<<endl;
        cin>>option;
        if(option=='b' || option=='B'){
            score++;
        }
        cout<<"Q9. Who is the Leader of Congress?"<<endl;
        cout<<"(a) Rahul Gandhi\n(b) Sonia Gandhi\n(c) Priyanka Gandhi\n(d) Rajeev Gandhi"<<endl;
        cin>>option;
        if(option=='a' || option=='A'){
            score++;
        }
        cout<<"Q10. What is the capital of Haryana?"<<endl;
        cout<<"(a) Hisar\n(b) Rohtak\n(c) Chandigarh\n(d) Panipat"<<endl;
        cin>>option;
        if(option=='c' || option=='C'){
            score++;
        }
    }else{
        cout<<"You have Entered Invalid Value"<<endl;
    }   
      return score;

}

int main(){
   char playAgain;

    do {
        int score = playQuiz();
        cout << "\n------------------------\n";
        cout << "Quiz completed!\n";
        cout << "Your score: " << score << "/10\n";
        if (score >= 6) {
            cout << "Congratulations! You passed the quiz.\n";
        } else {
            cout << "Sorry! You did not pass the quiz.\n";
        }
        cout << "------------------------\n";

        cout << "Do you want to play again? (Y/N): ";
        cin >> playAgain;
        cout << endl;

    } while (playAgain == 'Y' || playAgain == 'y');

    cout << "Thank you for playing the quiz. Goodbye!\n";

    return 0;
}




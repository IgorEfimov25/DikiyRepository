#include <iostream>

using namespace std;

class Chislo
{
public:
int bik (int answer[])
{
    for(int i = 0; i<4; i++)
        {
            if(answer[i]==value and i==number)
                {
                return(1);
                }
        }
    return(0);
}
int cow (int answer[])
{
    for(int i = 0; i<4; i++)
        {
            if(answer[i]==value)
                {
                return(1);
                }
        }
    return(0);
}
void getChislo(int n, int v)
{
    number = n;
    value = v;
}

private:
    int number;
    int value;

};

int main ()
{
int SecretChisloo[4] ={1, 5 ,3, 4} ;
Chislo SecretChislo[4];
for(int i = 0; i<4; i++)
    {
        SecretChislo[i].getChislo(i, SecretChisloo[i]);
      //  cout << SecretChislo[i].value;
    }

    int Answer;
    int AnswerChislo[4] = {0, 0, 0, 0};
    while (SecretChislo[0].bik(AnswerChislo)+ SecretChislo[1].bik(AnswerChislo)+ SecretChislo[2].bik(AnswerChislo)+ SecretChislo[3].bik(AnswerChislo) != 4) {
    cin >> Answer;
    AnswerChislo[3] = Answer%10;
    Answer = Answer/10;
    AnswerChislo[2] = Answer%10;
    Answer = Answer/10;
    AnswerChislo[1] = Answer%10;
    Answer = Answer/10;
    AnswerChislo[0] = Answer%10;
   // cout << AnswerChislo[0] << AnswerChislo[1] << AnswerChislo[2] << AnswerChislo[3] << endl;
    int bikow = SecretChislo[0].bik(AnswerChislo)+ SecretChislo[1].bik(AnswerChislo)+ SecretChislo[2].bik(AnswerChislo)+ SecretChislo[3].bik(AnswerChislo);
    int corow = SecretChislo[0].cow(AnswerChislo)+ SecretChislo[1].cow(AnswerChislo)+ SecretChislo[2].cow(AnswerChislo)+ SecretChislo[3].cow(AnswerChislo) - bikow;
    cout << "Cow: " << corow << endl;
    cout << "Bik: " << bikow << endl;
    }
    cout << "Good";
    return(0);
};

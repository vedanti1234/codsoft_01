#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    string name;
    char input;
    int inputuser;
    int score;
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<endl;

    do{
        srand(0);
        int variable = rand()%5+1;
        cout<<"enter any number: ";
        cin>>inputuser;
        cout<<endl;

        if(inputuser==variable)
        {
            cout<<"Congratulations ! you guessed the correct number";
            score++;
        }
        else{
            cout<<"sorry! try again.";
        }

        cout<<"would u like to try again (Y/N): ";
        cin>>input;
        cout<<endl;

    }while(input!='N');
    cout<<"your score is "<<score<<endl;
    cout<<"Game end"<<endl;

}
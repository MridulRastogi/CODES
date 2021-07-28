#include<iostream>
using namespace std;
int main()
{
    cout<<"Welcome to Stone Paper Scissor"<<endl<<"Let's Begin!!!"<<endl;
    int player_score = 0, computer_score = 0, index;
    string player_weapon;
    string computer_weapon[] = {"stone","paper","scissor"}, current_computer_weapon;
    bool flag = false;
    while(flag!=true)
    {
        cout<<endl<<"Weapon Of Player   : ";
        cin>>player_weapon;
        index = rand()%3;
        current_computer_weapon = computer_weapon[index];
        cout<<"Weapon of Computer : "<<current_computer_weapon<<endl;

        if(player_weapon=="stone" && current_computer_weapon=="paper")
            computer_score++;
        else if(player_weapon=="stone" && current_computer_weapon=="scissor")
            player_score++;

        else if(player_weapon=="paper" && current_computer_weapon=="stone")
            player_score++;
        else if(player_weapon=="paper" && current_computer_weapon=="scissor")
            computer_score++;

        else if(player_weapon=="scissor" && current_computer_weapon=="stone")
            computer_score++;
        else if(player_weapon=="scissor" && current_computer_weapon=="paper")
            player_score++;

        cout<<"Player Score = "<<player_score<<endl<<"Computer Score = "<<computer_score<<endl;

        if(player_score==5)
        {
            cout<<endl<<"You Win!!!"<<endl;
            flag = true;
        }
        else if(computer_score==5)
        {
            cout<<endl<<"Computer Wins!!!"<<endl;
            flag = true;
        }
    }
    return 0;
}

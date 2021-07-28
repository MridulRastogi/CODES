#include<iostream>
#include<windows.h>
using namespace std;

int check(char a[3][3],char ch)     //TO CHECK WHETHER ANY PLAYER HAS ONE BY THE FORMATION
{
    int i,j,c=0;
    if(c!=1)
    {
        for(i=0;i<3;i++)
        {
            if((a[i][0]==ch && a[i][1]==ch && a[i][2]==ch) || (a[0][i]==ch && a[1][i]==ch && a[2][i]==ch))
                c=1;
        }
        if(c!=1)
        {
            if(a[0][0]==ch && a[1][1]==ch && a[2][2]==ch)
                c=1;
            if(c!=1)
                if(a[2][0]==ch && a[1][1]==ch && a[0][2]==ch)
                    c=1;
        }
    }
    return c;
}

int check_draw(char a[3][3])    //TO CHECK IF THERE IS A DRAW
{
    int i,j,c=0;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            if(a[i][j]=='X' || a[i][j]=='O')
                c++;
    return c;
}

int check_validity(char a[3][3],int row, int col)   //TO CHECK IF THE POSITION IS NOT PRE-OCCUPIED BY ANOTHER SYMBOL
{
    if(a[row][col]=='.')
        return 1;
    else
        return 0;
}

void print(char a[3][3])
{
    system("cls");
    cout<<endl;
    cout<<a[0][0]<<" | "<<a[0][1]<<" | "<<a[0][2]<<endl;
    cout<<"----------"<<endl;
    cout<<a[1][0]<<" | "<<a[1][1]<<" | "<<a[1][2]<<endl;
    cout<<"----------"<<endl;
    cout<<a[2][0]<<" | "<<a[2][1]<<" | "<<a[2][2]<<endl<<endl;
}

// FUNCTIONS PART FINISHED

int main()
{
    bool play = true;
    //NOW THE GAME STARTS
    while(play==true)   //WILL CONTINUE IF PLAY = TRUE, IF PLAY = FALSE IT WILL TERMINATE
    {
        system("cls");
        int c=0, m=0, row_choice, column_choice;
        char ch;
        char a[3][3]={'.','.','.','.','.','.','.','.','.'};
        string x_player="", y_player="", first="";

        cout<<endl<<"Enter a name for the X-player:"<<endl;
        getline(cin,x_player);
        cout<<"Enter a name for the Y-player:"<<endl;
        getline(cin,y_player);

        while(first!=x_player && first!=y_player)
        {
            first="";
            cout<<"Who plays first, "<<x_player<<" or "<<y_player<<" ?"<<endl;
            getline(cin,first);
            if(first!=x_player || first!=y_player)
                cout<<first<<" is not a registered player."<<endl;
        }

        if(first==x_player)
            c=-1;
        else if(first==y_player)
            c=0;

        while(m!=1)     //CHECKING CONTINUITY OF GAME
        {
            c++;
            if(c%2==0)  //CHECKING IF THE TURN IS OF PLAYER X
            {
                print(a);
                cout<<"Player of the current turn: "<<x_player<<endl;
                do
                {
                    row_choice = -1;
                    column_choice = -1;
                    while(row_choice<0 || row_choice>2)
                    {
                        cout<<"Choose a row number (0 to 2):"<<endl;
                        cin>>row_choice;
                        if(row_choice<0 || row_choice>2)
                            cout<<row_choice<<" is not a valid row."<<endl;
                    }
                    while(column_choice<0 || column_choice>2)
                    {
                        cout<<"Choose a column number (0 to 2):"<<endl;
                        cin>>column_choice;
                        if(column_choice<0 || column_choice>2)
                            cout<<column_choice<<" is not a valid column."<<endl;
                    }
                }while(check_validity(a,row_choice,column_choice)!=1);
                ch = 'X';
                a[row_choice][column_choice] = ch;
                m = check(a,ch);
            }
            else if(c%2==1)     //CHECKING IF THE TURN IS OF PLAYER Y
            {
                print(a);
                cout<<"Player of the current turn: "<<y_player<<endl;
                do
                {
                    row_choice = -1;
                    column_choice = -1;
                    while(row_choice<0 || row_choice>2)
                    {
                        cout<<"Choose a row number (o to 2):"<<endl;
                        cin>>row_choice;
                        if(row_choice<0 || row_choice>2)
                            cout<<row_choice<<" is not a valid row."<<endl;
                    }
                    while(column_choice<0 || column_choice>2)
                    {
                        cout<<"Choose a column number (o to 2):"<<endl;
                        cin>>column_choice;
                        if(column_choice<0 || column_choice>2)
                            cout<<column_choice<<" is not a valid column."<<endl;
                    }
                }while(check_validity(a,row_choice,column_choice)!=1);
                ch = 'O';
                a[row_choice][column_choice] = ch;
                m = check(a,ch);
            }
            // NOW CHECKING STARTS FOR THE RESULTS OF THE GAME

            if(m==1 && c%2==0)          //CHECKING IF PLAYER X HAS WON THE GAME
            {
                print(a);
                cout<<"Game is over:"<<endl<<x_player<<" wins!"<<endl;
                char ans='M';
                while(ans!='Y' && ans!='N')
                {
                    cout<<"Would you like to play again? (Y/N)"<<endl;
                    //cin.ignore();//
                    cin>>ans;
                    cin.ignore();
                    if(ans=='Y' || ans=='N')
                    {
                        if(ans=='Y')
                        {
                            play = true;
                            //cin.ignore();
                        }
                        else
                        {
                            play = false;
                            cout<<"Bye!"<<endl;
                        }
                    }
                    else if(ans!='Y' && ans!='N')
                        cout<<"'"<<ans<<"'"<<" is not a valid answer."<<endl;
                }
            }
            else if(m==1 && c%2==1)     //CHECKING IF PLAYER Y HAS WON THE GAME
            {
                print(a);
                cout<<"Game is over:"<<endl<<y_player<<" wins!"<<endl;
                char ans='M';
                while(ans!='Y' && ans!='N')
                {
                    cout<<"Would you like to play again? (Y/N)"<<endl;
                    //cin.ignore();//
                    cin>>ans;
                    cin.ignore();
                    if(ans=='Y' || ans=='N')
                    {
                        if(ans=='Y')
                        {
                            play = true;
                            //cin.ignore();
                        }
                        else
                        {
                            play = false;
                            cout<<"Bye!"<<endl;
                        }
                    }
                    else if(ans!='Y' && ans!='N')
                        cout<<"'"<<ans<<"'"<<" is not a valid answer."<<endl;
                }
            }
            else if(check_draw(a)==9 && m!=1)        //CHECKING IF THE GAME IS DRAW
            {
                print(a);
                cout<<"Game is over:"<<endl<<"it is a tie!"<<endl;
                m=1;
                char ans='M';
                while(ans!='Y' && ans!='N')
                {
                    cout<<"Would you like to play again? (Y/N)"<<endl;
                    //cin.ignore();//
                    cin>>ans;
                    cin.ignore();
                    if(ans=='Y' || ans=='N')
                    {
                        if(ans=='Y')
                        {
                            play = true;
                            //cin.ignore();
                        }
                        else
                        {
                            play = false;
                            cout<<"Bye!"<<endl;
                        }
                    }
                    else if(ans!='Y' && ans!='N')
                        cout<<"'"<<ans<<"'"<<" is not a valid answer."<<endl;
                }
            }
        }
    }
    return 0;
}

/*
Mridul
Akshat
Mridul
1
0
2
0
1
1
2
1
1
2
*/

#include<iostream>
#include<windows.h>
using namespace std;

int check(char a[3][3],char ch)
{
    int i,j,c=0;
    if(c!=1)
    {
        for(i=0;i<3;i++)
            if(a[i][0]==ch && a[i][1]==ch && a[i][2]==ch)
                c=1;
        if(c!=1)
        {
            for(i=0;i<3;i++)
                if(a[0][i]==ch && a[1][i]==ch && a[2][i]==ch)
                    c=1;
            if(c!=1)
            {
                if(a[0][0]==ch && a[1][1]==ch && a[2][2]==ch)
                    c=1;
                if(c!=1)
                    if(a[2][0]==ch && a[1][1]==ch && a[0][2]==ch)
                        c=1;
            }
        }
    }
    return c;
}
void position_filling(char a[3][3],int choice,char ch)
{
    switch(choice)
    {
        case 1: a[2][0] = ch;
        break;
        case 2: a[2][1] = ch;
        break;
        case 3: a[2][2] = ch;
        break;
        case 4: a[1][0] = ch;
        break;
        case 5: a[1][1] = ch;
        break;
        case 6: a[1][2] = ch;
        break;
        case 7: a[0][0] = ch;
        break;
        case 8: a[0][1] = ch;
        break;
        case 9: a[0][2] = ch;
        break;
        default: cout<<"INVALID CHOICE! Now your turn has skipped!"<<endl;
        break;
    }
}
int check_draw(char a[3][3])
{
    int i,j,c=0;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            if(a[i][j]=='X' || a[i][j]=='O')
                c++;
    return c;
}
void run()
{
    Beep(1568, 200);
    Beep(1568, 400);
    Beep(1568, 600);
    Beep(1245, 1000);
    Beep(1397, 600);
    Beep(1397, 400);
    Beep(1397, 200);
    Beep(1175, 100);
    Beep(1175, 75);
    Beep(1175, 1000);

}
void print(char a[3][3])
{
    system("cls");
    cout<<endl;
    cout<<a[0][0]<<" | "<<a[0][1]<<" | "<<a[0][2]<<endl;
    cout<<"----------"<<endl;
    cout<<a[1][0]<<" | "<<a[1][1]<<" | "<<a[1][2]<<endl;
    cout<<"----------"<<endl;
    cout<<a[2][0]<<" | "<<a[2][1]<<" | "<<a[2][2]<<endl;
}
int main()
{
    int i,j,c=0,m,choice;
    char ch,p;
    char a[3][3]={'_','_','_','_','_','_','_','_','_'};
    cout<<"Choose you choice of marking block by the given reference : "<<endl;
    cout<<"7 | 8 | 9"<<endl;
    cout<<"----------"<<endl;
    cout<<"4 | 5 | 6"<<endl;
    cout<<"----------"<<endl;
    cout<<"1 | 2 | 3"<<endl<<endl;
    cout<<"Who Wants To Mark First (X or O) : ";
    cin>>p;
    c = p=='X' ? -1 : 0;
    while(m!=1)
    {
        c++;
        if(c%2==0)
        {
            cout<<endl<<"Enter the position of X according to the reference : ";
            cin>>choice;
            ch = 'X';
            position_filling(a,choice,ch);
            m = check(a,ch);
            print(a);
            if(m==1)
            {
                cout<<"Congratulations...Player X Wins!!"<<endl;
                run();
            }
            if(check_draw(a)==9 && m!=1)
            {

                cout<<"GAME IS DRAW"<<endl;
                m=1;
            }
        }
        else if(c%2==1)
        {
            cout<<endl<<"Enter the position of O according to the reference : ";
            cin>>choice;
            ch = 'O';
            position_filling(a,choice,ch);
            m = check(a,ch);
            print(a);
            if(m==1)
            {
                cout<<"Congratulations...Player O Wins!!"<<endl;
                run();
            }
            if(check_draw(a)==9 && m!=1)
            {
                cout<<"GAME IS DRAW"<<endl;
                m=1;
            }
        }
    }
    return 0;
}

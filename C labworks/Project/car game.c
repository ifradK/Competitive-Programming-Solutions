#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<stdbool.h>

#define ROW 16
#define COL 9

enum eMove
{
    left,
    right,
};

void move_carR();
void move_carL();
void print_track();
void move_raceDownR();
void move_raceDownL();
void remove_o();
void car_crash();

int r,c,pass;
int row,col;
int pick_side=0;
bool collision;

char track[ROW][COL]= {
                       "|      |",
                       "|      |",
                       "|      |",
                       "|      |",
                       "|      |",
                       "|      |",
                       "|      |",
                       "|      |",
                       "|      |",
                       "|      |",
                       "|      |",
                       "|      |",
                       "|o o   |",
                       "| o    |",
                       "|o o   |",
                       "|      |"};


int main()
{

    enum eMove position;

    position=left;
    char ch;
    int count=0;
    pass=0;
    collision=false;



    print_track();


    while(count<400)
    {

        if(collision==true)
            break;


        remove_o();

        if(pass==0)
        {
            srand((unsigned)time(NULL));
            pick_side=rand()%2;
            row=0;

        }

        if(track[ROW-5][1]!=' ' && track[ROW-5][3]!=' ')              //&& is changed
            car_crash();
        else if(track[ROW-5][4]!=' ' && track[ROW-5][6]!=' ')         //&& is changed
            car_crash();
        //system("cls");
        //print_track();

        if(pick_side==0)
        {
            move_raceDownR();
        }

        else if(pick_side==1)
        {
            move_raceDownL();
        }

        if(kbhit())
        {
            switch(ch=getch())
            {
            case '.':
            {
                if(position==left)
                {
                    move_carR();

                    position=right;
                    break;
                }
                else
                    break;

            }

            case ',':
                {
                    if(position==right)
                    {
                       move_carL();

                       position=left;
                       break;
                    }
                    else
                        break;

                }
                default:;
                }
        }



        system("cls");



        print_track();
        //move_raceDownR();

        count++;
    }



}

void print_track()
{
    for(r=3;r<ROW;r++)
    {
        printf("%s\n",track[r]);
    }

    printf("\npass = %d pickside = %d\n",pass,pick_side);
}

void move_carR()
{
    //printf("\nMOVE R\n");
    for(r=14;r>ROW-5;r--)
    {
        for(c=6;c>COL-COL;c--)
        {
            if(track[r][c]=='o')
            {
                track[r][c+3]='o';
                track[r][c]=' ';
            }

        }
    }
}

void move_carL()
{
    for(r=12;r<ROW-1;r++)
    {
        for(c=1;c<COL;c++)
        {
            if(track[r][c]='o')
            {
                track[r][c-3]='o';
                track[r][c]=' ';
            }

    }
}
}

void move_raceDownR()
{

    track[row][4]=' ';
    track[row][6]=' ';

    track[row+1][5]=' ';

    track[row+2][4]=' ';
    track[row+2][6]=' ';

    row++;

    track[row][4]='o';
    track[row][6]='o';

    track[row+1][5]='o';

    track[row+2][4]='o';
    track[row+2][6]='o';


    pass++;
    if(pass==15)
    {
        pass=0;
    }
    //Beep(300,200);

}
void move_raceDownL()
{

    track[row][1]=' ';
    track[row][3]=' ';

    track[row+1][2]=' ';

    track[row+2][1]=' ';
    track[row+1][3]=' ';

    row++;

    track[row][3]='o';
    track[row][3]='o';

    track[row+1][2]='o';

    track[row+2][1]='o';
    track[row+2][3]='o';

    pass++;
    if(pass==15)
    {
        pass=0;
    }
    //Beep(300,200);
}

void remove_o()
{
    track[ROW-1][1]=' ';
    track[ROW-1][2]=' ';
    track[ROW-1][3]=' ';
    track[ROW-1][4]=' ';
    track[ROW-1][5]=' ';
    track[ROW-1][6]=' ';
}

void car_crash()
{

    if(track[ROW-5][1]=='o' && track[ROW-5][3]=='o')               //&& is changed
    {
       if(track[ROW-5][1]=='o' && track[ROW-5][3]=='o')             //&& is changed
        collision=true;
    }


    if(track[ROW-5][4]=='o' && track[ROW-5][6]=='o')                    //&& is changed
    {
        if(track[ROW-5][1]=='o' && track[ROW-5][3]=='o')                //&& is changed
            collision=true;
    }


    //if(collision==true)
    //printf("Crash Detected");

}

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
            return 0;            //break is changed to return 0

        remove_o();

        if(pass==0)
        {
            srand((unsigned)time(NULL));
            pick_side=rand()%2;
            row=0;

        }

        if(track[11][2]!=' ' && track[11][4]!=' ')              //&& is changed and ROW and array numbers
            car_crash();
        else if(track[11][5]!=' ' && track[11][7]!=' ')         //&& is changed and ROW and array numbers
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
            case '.' :
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

            case ',' :
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
        Sleep(100);                         //New function added under windows.h,,,, sleep(milliseconds)

    }

return 0;

}

void print_track()
{
    for(r=3;r<16;r++)
    {
        printf("%s\n",track[r]);
    }

    printf("\npass = %d pickside = %d\n",pass,pick_side);
}

void move_carR()
{
    //printf("\nMOVE R\n");
    for(r=14;r>11;r--)                                     //ROW is changed
    {
        for(c=6;c>0;c--)                                   //COL-COL is changed to 0
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
    for(r=12;r<15;r++)                                //ROW is changed
    {
        for(c=1;c<9;c++)                              //COL is changed to 9
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
    track[15][1]=' ';                //ROW is changed
    track[15][2]=' ';
    track[15][3]=' ';
    track[15][4]=' ';
    track[15][5]=' ';
    track[15][6]=' ';
    track[15][6]=' ';
}

void car_crash()
{

    if(track[11][2]=='o' && track[11][4]=='o')               //&& is changed and ROW and array numbers
    {
       if(track[13][2]=='o' && track[13][4]=='o')             //&& is changed and ROW and array numbers
        collision=true;
    }


    if(track[11][5]=='o' && track[11][7]=='o')                    //&& is changed and ROW and array numbers
    {
        if(track[13][5]=='o' && track[13][7]=='o')                //&& is changed and ROW and array numbers
            collision=true;
    }


    //if(collision==true)
    //printf("Crash Detected");

}


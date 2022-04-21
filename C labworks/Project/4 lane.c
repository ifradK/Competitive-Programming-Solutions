#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<time.h>

void MoveCarTo0From1();
void MoveCarTo1From2();
void MoveCarTo2From3();
void MoveCarTo1From0();
void MoveCarTo2From1();
void MoveCarTo3From2();
void DisplayTrack();         //Displaying track
void MoveCarDown0();
void MoveCarDown1();
void MoveCarDown2();
void MoveCarDown3();
void RemoveLastRow();        //This function is used to hide the garbage characters at the lowermost row
void CarCrash();             //Checks if the car collided or not


int row,column;
int collision=0;
int PositionOfCar;
int ChooseSide;
int pass=0,point=0;

char track[16][15]=
{
    "|            |",
    "|            |",
    "|            |",
    "|            |",
    "|            |",
    "|            |",
    "|            |",
    "|            |",
    "|            |",
    "|            |",
    "|            |",
    "|            |",
    "|o o         |",
    "| o          |",
    "|o o         |",
    "|            |"
};

int main()
{
    int count=0;                       //Computer car moving one step down will result in increase of count
    PositionOfCar=0;                   //Initially position of the player car is 0.
    char direction;

    DisplayTrack();                    //Display the track initially

    while(count<1000)                  //The total number of steps the computer car can move is set to 1000
    {
        if(collision==1)                                 //If the collision is true, the value becomes 1. That means the game is over
        {
            printf("\nPOINTS GAINED: %d\n",point);
            printf("!!!GAME OVER!!!");
            return 0;
        }

        RemoveLastRow();                 //This function is used to hide the garbage characters at the lowermost row

        if(pass==0)
        {
            srand(time(0));              //srand() is used for generating random sequence of numbers
            ChooseSide=rand()%4;         //rand() is used for generating random numbers from the sequence
            row=0;
        }

        CarCrash();                     //This checks for collision of the car

        if(ChooseSide==0)
        {
            MoveCarDown0();
        }
        else if(ChooseSide==1)
        {
            MoveCarDown1();
        }
        else if(ChooseSide==2)
        {
            MoveCarDown2();
        }
        else if(ChooseSide==3)
        {
            MoveCarDown3();
        }

        if(kbhit())                       //This if(kbhit()) is used to check if any button from keyboard is pressed
        {
            switch(direction=getch())     //direction is the character variable which scans the button pressed with the help of getch() function
            {
            case 'a':
            {
                if(PositionOfCar==1)
                {
                    MoveCarTo0From1();
                    PositionOfCar=0;
                }
                else if(PositionOfCar==2)
                {
                    MoveCarTo1From2();
                    PositionOfCar=1;
                }
                else if(PositionOfCar==3)
                {
                    MoveCarTo2From3();
                    PositionOfCar=2;
                }
                break;
            }
            case 'd':
            {
                if(PositionOfCar==0)
                {
                    MoveCarTo1From0();
                    PositionOfCar=1;
                }
                else if(PositionOfCar==1)
                {
                    MoveCarTo2From1();
                    PositionOfCar=2;
                }
                else if(PositionOfCar==2)
                {
                    MoveCarTo3From2();
                    PositionOfCar=3;
                }
                break;
            }
            default:
                ;
            }
        }

        system("cls");                               //This function is used for clearing the screen

        DisplayTrack();

        count++;

        if(count%15==0)                                 //The points are showed using this algorithm
        {
            point++;
            printf("\nPOINTS GAINED: %d",point);
            //Sleep(1000);
        }

        if(count>=0 && count<=30)                       //Here as the count increases the difficulty of the game is increased
        {                                               // by increasing the speed of the computer cars
          Sleep(100);                                   // Sleep(milliseconds)
        }
        else if(count>=31 && count<=60)
        {
           Sleep(80);
        }
        else if(count>=61 && count<=90)
        {
           Sleep(60);
        }
        else if(count>=91 && count<=120)
        {
           Sleep(40);
        }
        else if(count>=121 && count<=150)
        {
           Sleep(20);
        }
        else if(count>=151)
        {
           Sleep(10);
        }
    }

    return 0;
}

void MoveCarTo0From1()
{
    track[12][4]=' ';
    track[12][6]=' ';
    track[13][5]=' ';
    track[14][4]=' ';
    track[14][6]=' ';

    track[12][1]='o';
    track[12][3]='o';
    track[13][2]='o';
    track[14][1]='o';
    track[14][3]='o';
}

void MoveCarTo1From2()
{
    track[12][7]=' ';
    track[12][9]=' ';
    track[13][8]=' ';
    track[14][7]=' ';
    track[14][9]=' ';

    track[12][4]='o';
    track[12][6]='o';
    track[13][5]='o';
    track[14][4]='o';
    track[14][6]='o';
}

void MoveCarTo2From3()
{
    track[12][10]=' ';
    track[12][12]=' ';
    track[13][11]=' ';
    track[14][10]=' ';
    track[14][12]=' ';

    track[12][7]='o';
    track[12][9]='o';
    track[13][8]='o';
    track[14][7]='o';
    track[14][9]='o';
}

void MoveCarTo1From0()
{
    track[12][1]=' ';
    track[12][3]=' ';
    track[13][2]=' ';
    track[14][1]=' ';
    track[14][3]=' ';

    track[12][4]='o';
    track[12][6]='o';
    track[13][5]='o';
    track[14][4]='o';
    track[14][6]='o';
}

void MoveCarTo2From1()
{
    track[12][4]=' ';
    track[12][6]=' ';
    track[13][5]=' ';
    track[14][4]=' ';
    track[14][6]=' ';

    track[12][7]='o';
    track[12][9]='o';
    track[13][8]='o';
    track[14][7]='o';
    track[14][9]='o';
}

void MoveCarTo3From2()
{
    track[12][7]=' ';
    track[12][9]=' ';
    track[13][8]=' ';
    track[14][7]=' ';
    track[14][9]=' ';

    track[12][10]='o';
    track[12][12]='o';
    track[13][11]='o';
    track[14][10]='o';
    track[14][12]='o';
}


void DisplayTrack()                    //The track is displayed from row 3 so that the computer car looks coming from inside the boundary
{
    for(int i=3; i<16; i++)
    {
        printf("%s\n",track[i]);
    }
}

void RemoveLastRow()                  //This function is used to hide the garbage characters at the lowermost row
{
    track[15][1]=' ';
    track[15][2]=' ';
    track[15][3]=' ';
    track[15][4]=' ';
    track[15][5]=' ';
    track[15][6]=' ';
    track[15][7]=' ';
    track[15][8]=' ';
    track[15][9]=' ';
    track[15][10]=' ';
    track[15][11]=' ';
    track[15][12]=' ';
}

void MoveCarDown0()
{
    track[row][1]=' ';
    track[row][3]=' ';
    track[row+1][2]=' ';
    track[row+2][1]=' ';
    track[row+2][3]=' ';

    row++;

    track[row][1]='o';
    track[row][3]='o';
    track[row+1][2]='o';
    track[row+2][1]='o';
    track[row+2][3]='o';

    pass++;

    if(pass==15)
    {
        pass=0;
    }
}

void MoveCarDown1()
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
}

void MoveCarDown2()
{
    track[row][7]=' ';
    track[row][9]=' ';
    track[row+1][8]=' ';
    track[row+2][7]=' ';
    track[row+2][9]=' ';

    row++;

    track[row][7]='o';
    track[row][9]='o';
    track[row+1][8]='o';
    track[row+2][7]='o';
    track[row+2][9]='o';

    pass++;

    if(pass==15)
    {
        pass=0;
    }
}

void MoveCarDown3()
{
    track[row][10]=' ';
    track[row][12]=' ';
    track[row+1][11]=' ';
    track[row+2][10]=' ';
    track[row+2][12]=' ';

    row++;

    track[row][10]='o';
    track[row][12]='o';
    track[row+1][11]='o';
    track[row+2][10]='o';
    track[row+2][12]='o';

    pass++;

    if(pass==15)
    {
        pass=0;
    }
}

void CarCrash()                       //Detects collision
{
    if(PositionOfCar==0)              //When the position of the player car is on the left and simultaneously
    {                                 // there is a computer car at that particular position then the value of collision
        if(track[10][1]=='o')         // is assigned to 1 which means the game is over
        {
            collision=1;
        }
    }

    else if(PositionOfCar==1)         //When the position of the player car is on the right and simultaneously
    {                                 // there is a computer car at that particular position then the value of collision
        if(track[10][4]=='o')         // is assigned to 1 which means the game is over
        {
            collision=1;
        }
    }

    else if(PositionOfCar==2)
    {
        if(track[10][7]=='o')
        {
            collision=1;
        }
    }

    else if(PositionOfCar==3)
    {
        if(track[10][10]=='o')
        {
            collision=1;
        }
    }
}

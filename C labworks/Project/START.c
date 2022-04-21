#include<stdio.h>
#include<windows.h>

void MoveCarR();            //Moving car to right
void MoveCarL();             //Moving car to left
void DisplayTrack();                //Displaying track
void MoveCarDownR();         //Computer car comes down from right
void MoveCarDownL();         //Computer car comes down from left
void RemoveLastRow();        ////This function is used to hide the garbage characters at the lowermost row
void CarCrash();             //Checks if the car collided or not


int row,column;
int collision=0;
int PositionOfCar;
int ChooseSide;
int pass=0,point=0;

char track[16][9]=            //This is the track with 16x9 2D array
{
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
    "|      |"
};

int main()
{
    int count=0;                       //Computer car moving one step down will result in increase of count
    PositionOfCar=0;                   //Initially position of the player car is 0. (0=left)
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
            ChooseSide=rand()%2;         //rand() is used for generating random numbers from the sequence
            row=0;
        }

        CarCrash();                     //This checks for collision of the car

        if(ChooseSide==0)
        {
            MoveCarDownL();             //This function runs the computer car in the left lane of the track
        }
        else if(ChooseSide==1)
        {
            MoveCarDownR();             //This function runs the computer car in the right lane of the track
        }

        if(kbhit())                       //This if(kbhit()) is used to check if any button from keyboard is pressed
        {
            switch(direction=getch())     //direction is the character variable which scans the button pressed with the help of getch() function
            {
            case 'a':
            {
                if(PositionOfCar==1)      //If the car is on the right and then a is pressed, then it moves the car to left and assigns the
                {                         // position of car to left
                    MoveCarL();
                    PositionOfCar=0;
                }
                break;
            }
            case 'd':
            {
                if(PositionOfCar==0)     //If the car is on the left and then d is pressed the it moves the car to right and assigns the
                {                        // position of car to right
                    MoveCarR();
                    PositionOfCar=1;
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
          Sleep(100);
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
           Sleep(0);
        }
    }

    return 0;
}

void MoveCarL()                        //Every element of the car is shifted to left from right by subtracting the array values by 3
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

void MoveCarR()                      //Every element of the car is shifted to left from right by adding the array values by 3
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
}

void MoveCarDownL()                 //At first characters in the positions of the car is cleared
{                                   // and then the row number is increased by 1
    track[row][1]=' ';              // and again the characters are assigned to that particular positions
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

    if(pass==15)                    //When pass becomes 15 it is reassigned to 0
    {
        pass=0;                     // so that the sequence is again generated using the srand() and rand() function
    }
}

void MoveCarDownR()                //Works the same way as MoveCarDownL but from the right side
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
}




















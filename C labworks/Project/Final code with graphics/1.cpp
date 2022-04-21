#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
#include<mmsystem.h>
#include<graphics.h>

void starting_interface();
int main()
{
    int position,Count=-1,collision=0;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\tc\\bgi");
    //variables for active page
    int page=0;
    //variable used to make the road look like it is moving
    int Enemy_Car_Position=-100;
    int line_position=-100;
    //variables to change the cars position.
    int C_x=0,Movement_Speed=5;
    int C_y=0;
    char a[10]= {0};


    starting_interface();

    while(1)
    {
        //function ensures screen does not flash and animation is smooth
        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();

       /* if(collision==1)
        {
            delay(5000);
            break;
        }*/

        //for background i.e side of the road
        setcolor(GREEN);
        rectangle(0,0,650,500);
        setfillstyle(1,GREEN);
        floodfill(1,1,GREEN);
        //creating track
        setcolor(WHITE);
        rectangle(125,-1,500,500);
        setfillstyle(1,8);
        floodfill(210,0,WHITE);




        //line in roads
        //makes several rectangles at once
         for(int i=-300;i<500;i+=300)
         {
             rectangle(185,40+i+line_position,215,130+i+line_position);
             rectangle(290,10+i+line_position,320,100+i+line_position);
             rectangle(395,60+i+line_position,425,150+i+line_position);
             setfillstyle(1,WHITE);
             floodfill(186,41+i+line_position,WHITE);
             floodfill(291,11+i+line_position,WHITE);
             floodfill(396,61+i+line_position,WHITE);
         }

         line_position=line_position+Movement_Speed;
         if(line_position>=500)
         {
             line_position=-100;
         }

        if(Count<=5)
        {
            Enemy_Car_Position+=15;
        }
        else if(Count>5 && Count<=15)
        {
            Enemy_Car_Position+=20;
            Movement_Speed=10;
        }
        else if(Count>15)
        {
            Enemy_Car_Position+=30;
            Movement_Speed=15;
        }

        if(Enemy_Car_Position>=500)
        {
            Enemy_Car_Position=-100;
        }

       /* setcolor(WHITE);
        rectangle(195,-1,205,500);
        setfillstyle(1,WHITE);
        floodfill(200,100,WHITE);

        setcolor(WHITE);
        rectangle(270,-1,280,500);
        setfillstyle(1,WHITE);
        floodfill(275,100,WHITE);

        setcolor(WHITE);
        rectangle(345,-1,355,500);
        setfillstyle(1,WHITE);
        floodfill(350,100,WHITE);

        setcolor(WHITE);
        rectangle(420,-1,430,500);
        setfillstyle(1,WHITE);
        floodfill(425,100,WHITE);*/


        //for  displaying points
        settextstyle(10,0,2);
        setbkcolor(BLACK);
        outtextxy(10,40,"POINTS:");

        outtextxy(100,40,a);





        //car
        setcolor(BLACK);
        setfillstyle(1,LIGHTBLUE);
        rectangle(292.5+C_x,400+C_y,332.5+C_x,460+C_y);
        floodfill(301+C_x,401+C_y,BLACK);

        //Front
        setfillstyle(1,BLUE);
        rectangle(297.5+C_x,385+C_y,327.5+C_x,400+C_y);
        floodfill(306+C_x,386+C_y,BLACK);

        setfillstyle(1,BLACK);
        rectangle(297.5+C_x,405+C_y,327.5+C_x,455+C_y);
        floodfill(306+C_x,406+C_y,BLACK);

        //wheels
        setfillstyle(1,BLACK);
        pieslice(297.5+C_x,392+C_y,90,270,6);
        pieslice(329.5+C_x,392+C_y,270,90,5);



        if(Enemy_Car_Position==-100)
        {
            srand(time(0));
            position=rand()%5;
            Count++;
            itoa(Count,a,10);
        }


        //code for making enemy cars

        if(position==0)
        {
            int i=0;
            setcolor(BLACK);
            setfillstyle(1,LIGHTRED);
            rectangle(142.5,0+Enemy_Car_Position,182.5,60+Enemy_Car_Position);
            floodfill(170,1+Enemy_Car_Position,BLACK);

            //Front
            setfillstyle(1,RED);
            rectangle(147.5,15+Enemy_Car_Position,177.5,0+Enemy_Car_Position);
            floodfill(150,16+Enemy_Car_Position,BLACK);

            setfillstyle(1,BLACK);
            rectangle(147.5,15+Enemy_Car_Position,177.5,0+Enemy_Car_Position);
            floodfill(150,16+Enemy_Car_Position,BLACK);

        }

        if(position==1)
        {
            int i=0;
            setcolor(BLACK);
            setfillstyle(1,LIGHTRED);
            rectangle(217.5,0+Enemy_Car_Position,257.5,60+Enemy_Car_Position);
            floodfill(220,1+Enemy_Car_Position,BLACK);

            //Front
            setfillstyle(1,RED);
            rectangle(222.5,15+Enemy_Car_Position,252.5,0+Enemy_Car_Position);
            floodfill(250,16+Enemy_Car_Position,BLACK);

            setfillstyle(1,BLACK);
            rectangle(222.5,15+Enemy_Car_Position,252.5,0+Enemy_Car_Position);
            floodfill(250,16+Enemy_Car_Position,BLACK);

        }

        if(position==2)
        {
            setcolor(BLACK);
            setfillstyle(1,LIGHTRED);
            rectangle(292.5,10+Enemy_Car_Position,332.5,70+Enemy_Car_Position);
            floodfill(300,11+Enemy_Car_Position,BLACK);

            //Front
            setfillstyle(1,RED);
            rectangle(297.5,25+Enemy_Car_Position,327.5,10+Enemy_Car_Position);
            floodfill(299,26+Enemy_Car_Position,BLACK);

            setfillstyle(1,BLACK);
            rectangle(297.5,25+Enemy_Car_Position,327.5,10+Enemy_Car_Position);
            floodfill(299,26+Enemy_Car_Position,BLACK);
        }



        if(position==3)
        {
            setcolor(BLACK);
            setfillstyle(1,LIGHTRED);
            rectangle(367.5,10+Enemy_Car_Position,407.5,70+Enemy_Car_Position);
            floodfill(370,11+Enemy_Car_Position,BLACK);

            //Front
            setfillstyle(1,RED);
            rectangle(372.5,25+Enemy_Car_Position,402.5,10+Enemy_Car_Position);
            floodfill(380,26+Enemy_Car_Position,BLACK);

            setfillstyle(1,BLACK);
            rectangle(372.5,25+Enemy_Car_Position,402.5,10+Enemy_Car_Position);
            floodfill(380,26+Enemy_Car_Position,BLACK);
        }

        if(position==4)
        {
            setcolor(BLACK);
            setfillstyle(1,LIGHTRED);
            rectangle(442.5,10+Enemy_Car_Position,482.5,70+Enemy_Car_Position);
            floodfill(450,11+Enemy_Car_Position,BLACK);

            //Front
            setfillstyle(1,RED);
            rectangle(447.5,25+Enemy_Car_Position,477.5,10+Enemy_Car_Position);
            floodfill(470,26+Enemy_Car_Position,BLACK);

            setfillstyle(1,BLACK);
            rectangle(447.5,25+Enemy_Car_Position,477.5,10+Enemy_Car_Position);
            floodfill(470,26+Enemy_Car_Position,BLACK);
        }


        if(292.5+C_x<=125 || 332.5+C_x>=500)
        {
            collision=1;
            //delay(1000);
            cleardevice();
            setcolor(WHITE);
            setbkcolor(BLACK);
            rectangle(0,0,650,500);
            floodfill(1,1,WHITE);
            setcolor(WHITE);
            settextstyle(10,0,8);
            outtextxy(100,200,"GAME OVER");
            PlaySound(TEXT("carcrash.wav"),NULL,SND_SYNC);
            PlaySound(TEXT("sound.wav"),NULL,SND_SYNC);
        }

        //Functions that are used to help the car move
        if(GetAsyncKeyState(VK_LEFT))
        {
            C_x=C_x-Movement_Speed;
        }
        else if(GetAsyncKeyState(VK_RIGHT))
        {
            C_x=C_x+Movement_Speed;
        }
        if(GetAsyncKeyState(VK_UP))
        {
            C_y=C_y-Movement_Speed;
        }
        else if(GetAsyncKeyState(VK_DOWN))
        {
            C_y=C_y+Movement_Speed;
        }


        if(position==0)
        {
            if((292.5+C_x>=142.5 && 292.5+C_x<=182.5 && 400+C_y<=60+Enemy_Car_Position && 400+C_y>=Enemy_Car_Position) || (327.5+C_x>=142.5 && 327.5+C_x<=182.5 && 400+C_y<=60+Enemy_Car_Position && 400+C_y>=Enemy_Car_Position))
            {
                collision=1;
                cleardevice();
                setcolor(WHITE);
                setbkcolor(BLACK);
                rectangle(0,0,650,500);
                floodfill(1,1,WHITE);
                setcolor(WHITE);
                settextstyle(10,0,8);
                outtextxy(100,200,"GAME OVER");
                PlaySound(TEXT("carcrash.wav"),NULL,SND_SYNC);
                PlaySound(TEXT("sound.wav"),NULL,SND_SYNC);
            }
        }
        else if(position==1)
        {
            if((292.5+C_x>=217.5 && 292.5+C_x<=257.5 && 400+C_y<=60+Enemy_Car_Position && 400+C_y>=Enemy_Car_Position) || (327.5+C_x>=217.5 && 327.5+C_x<=257.5 && 400+C_y<=60+Enemy_Car_Position && 400+C_y>=Enemy_Car_Position))
            {
                collision=1;
                cleardevice();
                setcolor(WHITE);
                setbkcolor(BLACK);
                rectangle(0,0,650,500);
                floodfill(1,1,WHITE);
                setcolor(WHITE);
                settextstyle(10,0,8);
                outtextxy(100,200,"GAME OVER");
                PlaySound(TEXT("carcrash.wav"),NULL,SND_SYNC);
                PlaySound(TEXT("sound.wav"),NULL,SND_SYNC);
            }
        }
        else if(position==2)
        {
            if((292.5+C_x>=292.5 && 292.5+C_x<=327.5 && 400+C_y<=60+Enemy_Car_Position && 400+C_y>=Enemy_Car_Position) || (327.5+C_x>=217.5 && 327.5+C_x<=257.5 && 400+C_y<=60+Enemy_Car_Position && 400+C_y>=Enemy_Car_Position))
            {
                collision=1;
                cleardevice();
                setcolor(WHITE);
                setbkcolor(BLACK);
                rectangle(0,0,650,500);
                floodfill(1,1,WHITE);
                setcolor(WHITE);
                settextstyle(10,0,8);
                outtextxy(100,200,"GAME OVER");
                PlaySound(TEXT("carcrash.wav"),NULL,SND_SYNC);
                PlaySound(TEXT("sound.wav"),NULL,SND_SYNC);
            }
        }
        else if(position==3)
        {
            if((292.5+C_x>=367.5 && 292.5+C_x<=407.5 && 400+C_y<=60+Enemy_Car_Position && 400+C_y>=Enemy_Car_Position) || (327.5+C_x>=367.5 && 327.5+C_x<=407.5 && 400+C_y<=60+Enemy_Car_Position && 400+C_y>=Enemy_Car_Position))
            {
                collision=1;
                cleardevice();
                setcolor(WHITE);
                setbkcolor(BLACK);
                rectangle(0,0,650,500);
                floodfill(1,1,WHITE);
                setcolor(WHITE);
                settextstyle(10,0,8);
                outtextxy(100,200,"GAME OVER");
                PlaySound(TEXT("carcrash.wav"),NULL,SND_SYNC);
                PlaySound(TEXT("sound.wav"),NULL,SND_SYNC);
            }
        }
        else if(position==4)
        {
            if((292.5+C_x>=142.5 && 292.5+C_x<=182.5 && 400+C_y<=60+Enemy_Car_Position && 400+C_y>=Enemy_Car_Position) || (327.5+C_x>=142.5 && 327.5+C_x<=182.5 && 400+C_y<=60+Enemy_Car_Position && 400+C_y>=Enemy_Car_Position))
            {
                collision=1;
                cleardevice();
                setcolor(WHITE);
                setbkcolor(BLACK);
                rectangle(0,0,650,500);
                floodfill(1,1,WHITE);
                setcolor(WHITE);
                settextstyle(10,0,8);
                outtextxy(100,200,"GAME OVER");
                PlaySound(TEXT("carcrash.wav"),NULL,SND_SYNC);
                PlaySound(TEXT("sound.wav"),NULL,SND_SYNC);
            }
        }

        page=1-page;
        delay(10);
    }
    getch();
}


void starting_interface()
{
    int choice=0;
    int finalchoice;

    setcolor(CYAN);
    rectangle(0,0,650,500);
    setfillstyle(1,CYAN);
    floodfill(1,1,CYAN);
    setcolor(WHITE);
    setbkcolor(CYAN);
    settextstyle(10,0,8);
    outtextxy(130,20,"CAR GAME");
    setcolor(BLACK);
    settextstyle(10,0,5);
    outtextxy(225,200,"NEW GAME");
    setcolor(WHITE);
    settextstyle(10,0,2);
    outtextxy(225,300,"CONTROLS");
    outtextxy(225,400,"EXIT");

    while(1)
    {
        if(GetAsyncKeyState(VK_DOWN))
        {
            choice--;
            //cleardevice();
        }
        else if(GetAsyncKeyState(VK_UP))
        {
            choice++;
            //cleardevice();
        }

        if(choice%3==0)
        {
            cleardevice();
            setcolor(CYAN);
            rectangle(0,0,650,500);
            setfillstyle(1,CYAN);
            floodfill(1,1,CYAN);
            setcolor(WHITE);
            setbkcolor(CYAN);
            settextstyle(10,0,8);
            outtextxy(130,20,"CAR GAME");
            setcolor(BLACK);
            settextstyle(10,0,5);
            outtextxy(225,200,"NEW GAME");
            setcolor(WHITE);
            settextstyle(10,0,2);
            outtextxy(225,300,"CONTROLS");
            outtextxy(225,400,"EXIT");
        }

        else if(choice%3==1)
        {
            cleardevice();
            setcolor(CYAN);
            rectangle(0,0,650,500);
            setfillstyle(1,CYAN);
            floodfill(1,1,CYAN);
            setcolor(WHITE);
            setbkcolor(CYAN);
            settextstyle(10,0,8);
            outtextxy(130,20,"CAR GAME");
            setcolor(BLACK);
            settextstyle(10,0,5);
            outtextxy(225,300,"CONTROLS");
            setcolor(WHITE);
            settextstyle(10,0,2);
            outtextxy(225,200,"NEW GAME");
            outtextxy(225,400,"EXIT");
        }

        else if(choice%3==2)
        {
            cleardevice();
            setcolor(CYAN);
            rectangle(0,0,650,500);
            setfillstyle(1,CYAN);
            floodfill(1,1,CYAN);
            setcolor(WHITE);
            setbkcolor(CYAN);
            settextstyle(10,0,8);
            outtextxy(130,20,"CAR GAME");
            setcolor(BLACK);
            settextstyle(10,0,5);
            outtextxy(225,400,"EXIT");
            setcolor(WHITE);
            settextstyle(10,0,2);
            outtextxy(225,200,"NEW GAME");
            outtextxy(225,300,"CONTROLS");
        }

        if(getch()==13)
        {
            break;
        }
    }
}





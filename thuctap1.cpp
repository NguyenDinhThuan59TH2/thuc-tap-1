#include <iostream>
#include <graphics.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstdio>
#include <math.h>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


int largest(float arr[], int n)
{
    return *max_element(arr, arr+n);
}
int getpercent(int a, int b)
{
    float a1=(a*100)/b;
    int b1= int(a1*600)/100;
    return (int)b1;
}
void barpl(float ssum[],float maxTT)
{
    int left, top, right, bottom;
    bar(left = 150, top = (750-getpercent(ssum[0],maxTT)),
    right = 190, bottom = 750);

    bar(left = 200, top = 750-getpercent(ssum[1],maxTT),
    right = 240, bottom = 750);

    bar(left = 250, top = 750-getpercent(ssum[2],maxTT),
    right = 290, bottom = 750);

    bar(left = 300, top = 750-getpercent(ssum[3],maxTT),
    right = 340, bottom = 750);

    bar(left = 350, top = 750-getpercent(ssum[4],maxTT),
    right = 390, bottom = 750);

    bar(left = 400, top = 750-getpercent(ssum[5],maxTT),
    right = 440, bottom = 750);

    bar(left = 450, top = 750-getpercent(ssum[6],maxTT),
    right = 490, bottom = 750);

    bar(left = 500, top = 750-getpercent(ssum[7],maxTT),
    right = 540, bottom = 750);

    bar(left = 550, top = 750-getpercent(ssum[8],maxTT),
    right = 590, bottom = 750);

    bar(left = 600, top = 750-getpercent(ssum[9],maxTT),
    right = 640, bottom = 750);

    bar(left = 650, top = 750-getpercent(ssum[10],maxTT),
    right = 690, bottom = 750);

    bar(left = 700, top = 750-getpercent(ssum[11],maxTT),
    right = 740, bottom = 750);
    line(140, (750-getpercent(maxTT,maxTT)) , 140, 760);
    line(140, 760, 750, 760);
}
void thongtin()
{
    circle(140,760 , 3);
    circle(170,760 , 3);
    for(int i=1;i<=11;i++)
    {
        int x = (50*i);
        circle(140+30+x,760 , 3);
    }
}
int main()
{
    float sum[11],maxT;
    string thang[]={"1","2","3","4","5","6","7","8","9","10","11","12"};
    for(int i = 0;i<12;i++)
    {
        string line;
        ifstream fi;
        fi.open("thang"+thang[i]+".txt");
            while(fi)
            {
                getline(fi,line);
                float su;
                std::stringstream(line)>>su;
                sum[i]+= su;
            }
        fi.close();
    }
    int n = sizeof(sum)/sizeof(sum[0]);

    for(int i = 0;i<12;i++)
    {
        cout<<sum[i]<<endl;
    }
    maxT = largest(sum, n);
    cout <<"max = "<< maxT <<endl;
    cout<<getpercent(1120,1146);
    //int gdriver = DETECT, gmode, errorcode;
    initwindow(1440,800);//mo cua so do hoa
    outtextxy(10,10,"CLOCK in graphics");
    barpl(sum,maxT);
    thongtin();
    getch();
    closegraph();//dong cua so do hoa
    return 0;
}



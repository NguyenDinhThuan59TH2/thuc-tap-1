#include <iostream>
#include <graphics.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstdio>
#include <math.h>
#include <algorithm>

using namespace std;

int sum[11];
void barpl()
{
    int left, top, right, bottom;
    bar(left = 150, top = 150,
    right = 190, bottom = 750);

    bar(left = 200, top = 250,
    right = 240, bottom = 750);

    bar(left = 250, top = 20,
    right = 290, bottom = 750);

    bar(left = 300, top = 600,
    right = 340, bottom = 750);

    bar(left = 350, top = 400,
    right = 390, bottom = 750);

    bar(left = 400, top = 118,
    right = 440, bottom = 750);

    bar(left = 450, top = 400,
    right = 490, bottom = 750);

    bar(left = 500, top = 750,
    right = 540, bottom = 750);

    bar(left = 550, top = 123,
    right = 590, bottom = 750);

    bar(left = 600, top = 541,
    right = 640, bottom = 750);

    bar(left = 650, top = 680,
    right = 690, bottom = 750);

    bar(left = 700, top = 150,
    right = 740, bottom = 750);

    bar(left = 750, top = 12,
    right = 790, bottom = 750);

}
int main()
{
    int left, top, right, bottom;
    string thang[]={"1","2","3","4","5","6","7","8","9","10","11","12"};
    for(int i = 0;i<12;i++)
    {
        string line;
        ifstream fi;
        fi.open("thang"+thang[i]+".txt");
            while(fi)
            {
                getline(fi,line);
                cout<<line<<endl;
                //sum[i]+= std::stoi(line);
            }
        fi.close();
        cout <<"------------"<< endl;
    }
    //sort(sum,sum+12);
    //for(int i = 0; i < 12; i++)
		//cout << sum[i] << " ";
    //int gdriver = DETECT, gmode, errorcode;
    //initwindow(1440,800);//mo cua so do hoa
    //outtextxy(10,10,"CLOCK in graphics");
    //barpl();
    //getch();
    //closegraph();//dong cua so do hoa
    return 0;
}



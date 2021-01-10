#ifndef GRID_H
#define GRID_H
#include <iostream>
using namespace std;

class grid
{
private:
    const static auto row=3;
    const static auto col=3;
    char play='_';

    char &arr[3][3];

public:
    grid() {}
    void board()
    {
        for(auto i=0; i<row; i++)
        {

            for(auto j=0; j<col; j++)
            {
               arr[i][j]=play;
            }

        }

    }
    void drawBoard(){
        board();
    for(auto i=0; i<row; i++)
        {
            for(auto j=0; j<col; j++)
            {
               cout<<"|"<<arr[i][j]<<"|";
            }
            cout<<endl;
        }

    }


    char location(char arr[3][3],int x, int y)
    { board();
        char current=' ';

        for(auto r=0; r<x; r++)
        {

            for(auto c=0; c<y; c++)
            {
                current=arr[r][c];
            }
        }
        return current;
    }

    bool isEmpty(int x, int y)
    {
        return location(arr,x,y)=='_';
    }

    void putToken(char plays, int x, int y){

      for(auto r=0; r<x; r++)
        {
            for(auto c=0; c<y; c++)
            {
                arr[r][c]=plays;
            }
        }
    }

};

#endif // GRID_H

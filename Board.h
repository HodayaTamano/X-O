using namespace std;
#pragma once
#include <iostream>


class Board{

    int size;
    Charecter matrix[][]=new matrix[size][size];

  public: 

    Board(int size){ 
        Charecter matrix[][]=new matrix[size][size];
        for(int i=0, i<size; i++){
            for(int j=0, j<size; j++){
                matrix[i][j]=Character();
            }
        }
    }
    
    Board& char operator [] (Place p){
        char c;
        c = Place(a,b);
        return c;
    }
    Board& operator = (char c){
        for(int i=0, i<size; i++){
            for(int j=0, j<size; j++){
                matrix[i][j]=Place(c);
            }
        }
    }

    ostream& operator <<(ostream& os, const Board& b);
    Place& operator [] (int a, int b);



    //board()
};
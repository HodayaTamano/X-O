using namespace std;
#pragma once
#include <iostream>

class Place{
    int x;
    int y;
   

public:
    
    char Place(int a,int b){
        this->x = a;
        this->y = b;
        return matrix[this->x][this->y];
    }
    Place(char c){
        this->index = c;
    }

    Place& operator = (char c){
        matrix[this->x][this->y] = c;
    }
    char operator = (Place p){
        this->x=p.x;
        this->y=p.y;
        return matrix[this->x][this->y];
        // char c;
        // c = matrix[this->x][this->y];
        // return c;
    }
    ostream& char operator <<(ostream& os, const Place& p){
        os << p.index;
        return os;
    }
    ostream& char operator <<(ostream& os, const char& c){
        os << c;
        return os;
    }
    Place& operator [] (int a, int b){
        return index;
    }

};
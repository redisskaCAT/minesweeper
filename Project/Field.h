#ifndef FIELD
#define FIELD

#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;

#include "Coord.h"
#include "State.h"
#include "Value.h"
#include "Cell.h"
#include "Mines.h"

class Field
{
protected:
    int cols;
    int rows;
    Cell **field;
    void filling(string type);
public:
    Field(Coord size, string type); // добавить перемещение по файлу по position    
    int checkCollisions(Coord coord);
    void minning(int totalMines, Coord coord_0); 
    void setState(Coord coord, State _state);
    Value getVal(Coord coord);
    State getState(Coord coord);   
    ~Field();
};

#endif

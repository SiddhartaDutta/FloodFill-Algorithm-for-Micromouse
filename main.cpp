#include <iostream>
#include <queue>

using namespace std;

// ONLY EDIT THIS LINE (LINE 6)
// Dimension of square maze
const int mazeDimension = 16;

// Create maze array
int* maze[mazeDimension];


void initMaze(){
  for(int i = 0; i < mazeDimension; i++){
    maze[i] = new int[mazeDimension];
  }
}

void printMaze(){

    for(int y = 0; y < mazeDimension; y++){
        for(int x = 0; x < mazeDimension; x++){
            cout << maze[x][y] << " ";
        }
        cout << endl;
    }

}

/* 

    --- Maze array diagram ---

x   |0|1|2|3|...
    |1|
    |2|
    |3|
    |...|

    y

*/

void fillMaze(){

    // for 16x16, 7 & 8
    int fillVal = mazeDimension - 2;
    int fillValLimit = fillVal/2;

    for(int x = 0; x < mazeDimension; x++){
        //if(x < )
        for(int y = 0; y < mazeDimension; y++){
            maze[x][y] = 1;
        }
    }

    
}

int main(){

    initMaze();
    fillMaze();
    printMaze();

    return 0;
}
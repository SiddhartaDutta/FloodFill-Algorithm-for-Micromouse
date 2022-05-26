#include <iostream>
#include <queue>

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

/*

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

    for(int x = 0; i < mazeDimension; x++){
        for(int y = 0; y < mazeDimension; y++){
            
        }
    }
}

int main(){

    

    return 0;
}
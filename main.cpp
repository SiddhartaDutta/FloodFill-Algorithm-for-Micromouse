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
    int fillValCopy = fillVal;

    cout << fillVal/2 + 1 << endl;

    for(int x = 0; x < mazeDimension; x++){
        if(x < fillVal/2 + 1 && x != 0){
            fillValCopy--;
        } else if(x > (fillVal/2 + 1)){
            fillValCopy++;
        } 
        
        for(int y = 0; y < mazeDimension; y++){
            if(y < fillVal/2){
                maze[x][y] = fillValCopy;
                fillValCopy--;
            } else if(y == fillVal/2 || y == (fillVal/2 + 1)){
                maze[x][y] = fillValCopy;
            } else {
                fillValCopy++;
                maze[x][y] = fillValCopy;
            }
        }
    }
    
}

int main(){

    initMaze();
    fillMaze();
    printMaze();

    return 0;
}
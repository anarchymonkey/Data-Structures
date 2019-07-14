#include<bits/stdc++.h>
using namespace std;




int main(){
    int matrixRow,matrixCol,initialRow,initialCol,moves = 1;
    
    cin>>matrixRow;
    cin>>matrixCol;

    // for fixed memory;
    int arr[matrixRow][matrixCol];
    cin>>startingRow;
    ci>>startingCol;

    int tempRow,tempCol;

    tempRow = startingRow;
    tempCol = startingCol;

    arr[startingRow][startingCol] = 1;



    while(1){

        while(startingRow < matrixRow && startingCol < matrixCol){

            switch(moves){
                case 1: 
                        tempRow += 2;

                        if(tempCol + 1 < matrixCol){
                            cout<<"("<<tempRow<<","<<tempCol+1<<")"<<endl;
                        }
                        if(tempCol -1 < matrixCol){
                            cout<<"("<<tempRow<<","<<tempCol-1<<")"<<endl;
                        }
                        break;
                case 2: 
                        tempRow -= 2;
                        if(tempCol + 1 < matrixCol){
                            cout<<"("<<tempRow<<","<<tempCol+1<<")"<<endl;
                        }
                        if(tempCol -1 < matrixCol){
                            cout<<"("<<tempRow<<","<<tempCol-1<<")"<<endl;
                        }
                        break;
                case 3: 
                        tempCol -= 2;
                        if(tempRow + 1 < matrixRow ){
                            cout<<"("<<tempCol<<","<<tempRow+1<<")"<<endl;

                        }
                        if(tempRow - 1 < matrixRow ){
                            cout<<"("<<tempCol<<","<<tempRow-1<<")"<<endl;

                        }
                        break;
                case 4:
                        tempCol += 2;
                        if(tempRow + 1 < matrixRow ){
                            cout<<"("<<tempCol<<","<<tempRow+1<<")"<<endl;

                        }
                        if(tempRow - 1 < matrixRow ){
                            cout<<"("<<tempCol<<","<<tempRow-1<<")"<<endl;

                        }
                        break;
                }
                tempRow = startingRow;
                tempCol = startingCol;
        }
    }
}
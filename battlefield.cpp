//BATTLEFIELD
//12.08.2022
//by birsuyilmaz

#include <iostream>

using namespace std;
int main(){
    char ships[6][6] = {
        {'0', '1', '1', '0', '0', '1'},
        {'0', '0', '0', '0', '1', '1'},
        {'0', '0', '1', '0', '1', '0'},
        {'0', '0', '1', '0', '0', '0'},
        {'0', '1', '0', '1', '1', '0'},
        {'0', '0', '0', '0', '0', '0'}
    };

    int hits = 0;
    int num_turn = 15;
    
    while((hits < 10)  && (num_turn > 0)){
        int row, column;
        cout << "Selecting coordinates\n";

        cout << "Choose a row number between 0 and 5; ";
        cin >> row;

        cout << "Choose a column number between 0 and 5; ";
        cin >> column;

        if(ships[row][column] == '1'){
           
            hits ++;
            cout << "!!!Attack is successfull!!! " << (10-hits) << " left.\n\n";
        }
        else if(ships[row][column] == 'X'){
            cout << "You already attacked this place, try again.\n\n";
        }
        else{

            cout << "!!!You missed!!!\n\n";
        }
        ships[row][column] = 'X';
    

        num_turn --;
        cout << "You have " << num_turn << " turns left\n\n";
    }
    if(hits == 10){
        cout << "Victory!\n";
        cout << "You won in " << 15 - num_turn << " turns";
    }
    else{
        char button;
        cout << "You lost!\n";
        cout << "If you wanna see the map please, press 'y' ";
        cin >> button;
        if(button == 'y'){
            for(int i = 0; i < 6; i++){
                for(int j = 0; j < 6; j++){
                    cout << ships[i][j] << " ";
                }
                cout << "\n";
            }
        }
    }
}
    


    //by birsuyilmaz
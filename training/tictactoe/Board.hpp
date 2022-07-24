#include "Cell.hpp"
#include <iostream>
#include <vector>

class Board {
public:
    void draw_gameboard(){
        for (auto x = gameboard.begin(); x!= gameboard.end(); x++){
            
        }
    }
private:
    std::vector<Cell> gameboard{(9, Cell(0))};

};
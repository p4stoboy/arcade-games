#include "board.h"
#include <iostream>

Board::Board(){


    for (int x = 0; x < 6; x++)
    {
        grid.push_back(blocks());

        for(int y = 0; y < 12; y++)
        {
            grid[x].push_back(nullptr);
        }
        
    }

    //test creation of a block with a pointer to it (currentBlock is the pointer) that isn't in the grid
    currentBlock = std::make_shared<Block>(810, 1);


}

void Board::update()
{
    currentBlock->update();

        if (key_typed(S_KEY))
        {
            //to ensure sprite arrives exactly at destination pixel, moving speed should always be a factor of 72 (block height)
            currentBlock->speedUp(8);
        }

        if (key_typed(A_KEY))
        {
            
            currentBlock->moveLeft();
        }

        if (key_typed(D_KEY))
        {
            
            currentBlock->moveRight();
        }
    




}

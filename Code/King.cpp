

// Includes
#include "King.h"	// Header file for this class
#include "Board.h"  // Board class

extern board game_board;  // tell compiler that a board object exists

// constructor for the king
king::king(colour piece_col, position piece_pos)
{
	this->type = 'K';
	this->col = piece_col;
	this->pos = piece_pos;
	castling = true;
}

// check the requested king move is valid:
//	king can move one space in any direction
bool king::valid_move(const position& move_to_pos)
{
	bool valid_move{ false };

	// check for move of one square in any direction
	if ((((move_to_pos.x - pos.x) == 0 && (move_to_pos.y - pos.y) == 1)
		|| ((move_to_pos.x - pos.x) == 1 && (move_to_pos.y - pos.y) == 1)
		|| ((move_to_pos.x - pos.x) == 1 && (move_to_pos.y - pos.y) == 0)
		|| ((move_to_pos.x - pos.x) == 1 && (move_to_pos.y - pos.y) == -1)
		|| ((move_to_pos.x - pos.x) == 0 && (move_to_pos.y - pos.y) == -1)
		|| ((move_to_pos.x - pos.x) == -1 && (move_to_pos.y - pos.y) == -1)
		|| ((move_to_pos.x - pos.x) == -1 && (move_to_pos.y - pos.y) == 0)
		|| ((move_to_pos.x - pos.x) == -1 && (move_to_pos.y - pos.y) == 1))
		&& game_board.get_piece(move_to_pos) == nullptr) {

		castling = false;
		return !valid_move;
	}

	// check for capture of opposite coloured piece
	else if ((((move_to_pos.x - pos.x) == 0 && (move_to_pos.y - pos.y) == 1)
		|| ((move_to_pos.x - pos.x) == 1 && (move_to_pos.y - pos.y) == 1)
		|| ((move_to_pos.x - pos.x) == 1 && (move_to_pos.y - pos.y) == 0)
		|| ((move_to_pos.x - pos.x) == 1 && (move_to_pos.y - pos.y) == -1)
		|| ((move_to_pos.x - pos.x) == 0 && (move_to_pos.y - pos.y) == -1)
		|| ((move_to_pos.x - pos.x) == -1 && (move_to_pos.y - pos.y) == -1)
		|| ((move_to_pos.x - pos.x) == -1 && (move_to_pos.y - pos.y) == 0)
		|| ((move_to_pos.x - pos.x) == -1 && (move_to_pos.y - pos.y) == 1))
		&& game_board.get_piece(move_to_pos) != nullptr && game_board.get_piece(move_to_pos)->get_colour() != col) {
	
		castling = false;
		return !valid_move;
	}

	return valid_move;
}

// test if the piece is allowed to castle
bool king::get_castling() const
{
	return castling;
}

// set the castling status of king
void king::set_castling(const bool& castle_status) 
{
	castling = castle_status;
}

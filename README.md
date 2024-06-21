# C++ OOP Chess

## Abstract
In this project I implement a fully working chess game in C++ using principles from object-orientated programming (OOP), namely encapsulation, inheritance and polymorphism. The program allows two people to play a full game of chess, where all advanced rules are in play: such as castling, pawn promoation and en passant. Many additional features have been added to improve the quality of life experience of the player such as save/load game methods, undoing moves and providing a list of all possible moves. A simple AI was also implemented which allows a single player to play againt the computer. This AI uses a minmax algorithm on a search tree, utilising apha-beta pruning, to determine the best move to make.

## Introduction
Chess is a popular two-player strategy board game played out on an 8x8 grid. Each player isassigned a colour, white or black, and begins the game with 16 pieces, with the ultimate aimbeing to checkmate the opponents king piece, i.e. placing it in inescapable threat of capture [1].The rules of chess are somewhat complicated; with six unique chess pieces, each with its ownrule set on how it is allowed to move around the board and capture other pieces. There are alsoseveral advanced moves such as castling, en passant and pawn promotion which require uniqueconditions to be satisfied.

The game of chess lends itself well to an OOP implementation and we make heavy useof its three main ideas throughout the program. Encapsulation allows us to wrap data, andthe functions that manipulate said data, in a single unit. This has several benefits such asreducing complexity, protecting our data and making the program more flexible to changes. Theapplication of inheritance allows us to create derived classes, from an existing base class, whichinherit all properties of that base class, as well as having additional features of its own. This isuseful for implementing the pieces. Finally, we make use of both compile time polymorphism,to overload operators, and run time polymorphism, allowing us to create virtual functions in thebase class that can be overridden in the derived classes.

In addition to these main ideas we also make use of other advanced features such as headerfiles, smart pointers, exceptions and recursion to improve the program.


<h2>This code is an implementation of the Tic Tac Toe multiplayer game, known as X O game.</h2>

<h1>Implementation Details:</h1>
1. For the board create 9 variables, each one holds ‘-’ as a default character value.
</br>
2. Assume player one movement will change – into O, while player two will change into
X.
3. Each time the program asks the player one then player two, to enter the next move
by entering two numbers (row then column), which is counted from 1 to 3.
4. Each move eight checks will be computed:
a) V1,V2,V3 are equal to X or O (first row check)
b) V4,V5,V6 are equal to X or O (second row check)
c) V7,V8,V9 are equal to X or O (third row check)
d) V1,V4,V7 are equal to X or O (first column check)
e) V2,V5,V8 are equal to X or O (second column check)
f) V3,V6,V9 are equal to X or O (third column check)
g) V1,V5,V9 are equal to X or O (diagonal right to left check)
h) V3,V5,V7 are equal to X or O (diagonal left to right check)
5. If none is true then allow another move to be applied, else show message then
winner is player one (i.e. if checks are equal O) or player two (i.e. if checks are equal
X).
6. After a player wins, the program will ask to continue a new game or exit.

<h1>Example:</h1>

<img width="800" alt="X O game" src="https://github.com/MonaMohsen166/Tic-Tac-Toe/assets/73717585/cc227831-3a31-4213-80c2-db33cf8bdbfe">



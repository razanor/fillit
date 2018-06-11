# Fillit

  Fillit is a project that let discover and/or familiarize with a recurring
problematic in programming: searching the optimal solution among a huge set of possibilities,
in a respectable timing. The goal of this project is to find a way to
assemble a given Tetriminos set altogether in the smallest possible square.<br/>
The algo for this ptoject - backtracking.

For testing:
1) make
2) ./fillit [file]
This file has a very specific format : every Tetrimino must exactly fit in a
4 by 4 chars square and all Tetrimino are separated by an newline each.
<br/>Examles of valid file:

![screenshot from 2018-06-11 09-54-03](https://user-images.githubusercontent.com/28829457/41216902-df63ffac-6d5e-11e8-88e5-f026fe007de9.png)

Output example:
<pre>
AABBDD.
A.BBDD.
ACCCCFF
EE..FF.
.EEHHII
.G.H..I
GGGH..I
</pre>

Here each letter represent each tetriminos. In this particular case from A to E. 
Maximum it can be 26 tetreminos pieces.

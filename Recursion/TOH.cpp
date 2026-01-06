/*
Question: 
In 1883, Edward Lucas invented, or perhaps reinvented, one of the most popular puzzles of all times
– the Tower of Hanoi, as he called it – which is still used today in many computer science textbooks
to demonstrate how to write a recursive algorithm or program. First of all, we will make a list of the
rules of the puzzle:
• There are three pegs: A, B and C.
• There are n disks. The number n is constant while working the puzzle.
• All disks are different in size.
• The disks are initially stacked on peg A so that they increase in size from the top to the bottom.
• The goal of the puzzle is to transfer the entire tower from the A peg to the peg C.
• One disk at a time can be moved from the top of a stack either to an empty peg or to a peg with
a larger disk than itself on the top of its stack.
Your job will be to write a program which will show a copy of the puzzle on the screen step by step,
as you move the disks around. This program has to solve the problem in an efficient way.
TIP: It is well known and rather easy to prove that the minimum number of moves needed to complete
the puzzle with n disks is 2n − 1.

Input
The input file will consist of a series of lines. Each line will contain two integers n, m. n, lying within
the range [1, 250], will denote the number of disks and m, belonging to [0, 2
n − 1], will be the number
of the last move, you may assume that m will also be less than 216, and you may also assume that a
good algorithm will always have enough time. The file will end at a line formed by two zeros.

Output
The output will consist again of a series of lines, formatted as show below.
NOTES:
• There are 3 spaces between de ‘=>’ and the first number printed. If there isn’t any number, there
should be no spaces.
• All the disks in a single peg are printed in a single line (not as in the Problem #1 below).
• Print a blank line after every problem.

  */

#include<iostream>
using namespace std;

int Sum(int arr[], int N)
{
    if(N==0)
        return 0;
        else
        return Sum(arr, N-1)+arr[N-1];
}

int main(){
    int T;
    cin>>T;

    for(int i=0; i<T; i++){
        int N;
        cin>>N;
        if (N>100)
        {
            cout<<"Error"<<endl;
            continue;
        }

    int arr[100];
    for (int j = 0; j < N ; j++)
    {
        cin>>arr[j];
    }
        int total=Sum(arr, N);
        cout<<"Case "<<i+1<<": "<<total<<endl;
        }
        return 0;
}

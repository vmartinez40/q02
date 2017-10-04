#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector <vector <string> > wordGrid;

  /*
     do not edit this space

     where this comment is, the instructor will
     add the code that gets the user's input and
     inserts the input into every element of the
     matrix wordGrid
  */

  //PUT YOUR CODE BELOW THIS LINE
  int rows = 0;
  int cols = 0;
  int max = wordGrid.size();
  for(int rows = 0;rows < max; rows++)
  {
    for(int cols = 0;cols < max; cols++)
    {
        cout<<"Row "<<rows<<"Column "<<cols<<"is "<<wordGrid[rows][cols]<<endl;
    }
  }
  //that prints each element of the matrix in the
  //following format:
  //Row _ Column _ is _
  //the first and second blanks should be replaced with the coordinates
  //of the element's row and column and the third blank should be replaced
  //with the value of that element

  



 return 0;
}





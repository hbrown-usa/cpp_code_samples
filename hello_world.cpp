/* Readme Section

Copyright:
  
  Copyright 2016 Harold K. Brown
  
  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

Annotation:
  The "Hello, World!" program has been reproduced from scratch or from memory 
  by hundreds of programmer over the years in the context of computer software.
  The term "Hello, World!" has evolved to imply an initial test
  condition when setting up a new programming environment or a beginning tutorial.
  
  It was first popularized by Brian Kernighan during the development
  of Language B & C when introduced in his programming books as examples.
  However, it may have been used first by others that influenced Kernighan.
  
  Although this program is a variant, it reflects the spirit of Brian Kernighan's intent
  and is meant to honor his contributions to computers.
  
To Compile in Debian or other Linux systems:
  gcc hello_world.cpp -lstdc++ -o hello_world
  
  or
  
  clang hello_world.cpp -lstdc++ -o hello_world
  
*/

#include <iostream>
using namespace std;

int main(){
  cout << "Hello, World!" << endl;
}

/*
References:
https://lccn.loc.gov/77028983
Kernighan, Brian W. The C programming language / Brian W. Kernighan, Dennis M. Ritchie. Englewood Cliffs, N.J. : Prentice-Hall, c1978.
     x, 228 p. ; 24 cm.
     QA76.73.C15 K47
     ISBN: 0131101633
     
"Hello, World!" program. (2016, October 29). In Wikipedia, The Free Encyclopedia. Retrieved 20:50, October 29, 2016, from https://en.wikipedia.org/w/index.php?title=%22Hello,_World!%22_program&oldid=746831191

*/

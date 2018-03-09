#include <iostream>
using namespace std;
//Lucas Zagal
class Piece
{
public:
  Piece(char typ, int x, int y, bool isWhite);
  int xpos, ypos;
  char type;
  char getType(void);
  int getXpos(void);
  int getYpos(void);
  bool getWhite(void);
  bool white;
};
Piece::Piece(char typ, int x, int y, bool isWhite)
{
  type = typ;
  xpos = x;
  ypos = y;
  white = isWhite;
}

char Piece::getType(void)
{
  return type;
}

int Piece::getXpos(void)
{
  return xpos;
}

int Piece::getYpos(void)
{
  return ypos;
}

bool Piece::getWhite(void)
{
  return white;
}



 int main()
{

  Piece BP1('P',0,1,false);
  Piece BP2('P',1,1,false);
  Piece BP3('P',2,1,false);
  Piece BP4('P',3,1,false);
  Piece BP5('P',4,1,false);
  Piece BP6('P',5,1,false);
  Piece BP7('P',6,1,false);
  Piece BP8('P',7,1,false);

  Piece BQ('Q',3,0,false);

  Piece BK('K',4,0,false);

  Piece WP1('P',0,6,true);
  Piece WP2('P',1,6,true);
  Piece WP3('P',2,6,true);
  Piece WP4('P',3,6,true);
  Piece WP5('P',4,6,true);
  Piece WP6('P',5,6,true);
  Piece WP7('P',6,6,true);
  Piece WP8('P',7,6,true);

  Piece WQ('Q',3,0,true);

  Piece WK('K',4,0,true);


}
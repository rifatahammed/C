#include <iostream>
#include <string>
using namespace std;

enum Position{ LEFT, CENTRE, RIGHT };            // "CENTRE" because I'm British!

void print( Position pos, string s, int linelength )
{
   int spaces = 0;
   switch( pos )
   {
      case CENTRE: spaces = ( linelength - s.size() ) / 2; break;
      case RIGHT : spaces =   linelength - s.size()      ; break;
   }
   if ( spaces > 0 ) cout << string( spaces, ' ' );
   cout << s << '\n';
}


int main()
{
   const int LINELENGTH = 40;
   string header( LINELENGTH, '=' );

   cout << header << '\n';
   print( LEFT  , "Left"  , LINELENGTH );
   print( RIGHT , "Right" , LINELENGTH );
   print( CENTRE, "Centre", LINELENGTH );
   cout << header << '\n';
}
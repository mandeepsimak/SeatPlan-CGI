#include "strategy.h"

Strategy :: Strategy()
{
    ContentType();
}

void Strategy :: Head()
{
    HeadStart();
    Title("Strategy");
    CSS();
    HeadEnd();
}

void Strategy :: BodyContent()
{
    cout << "<div id = \"body\" class = \"center\">" << endl;
         
    Header();
    
    cout << "<div id = \"content\" class = \"content\">" << endl
         
         
         
         << "</div>" << endl
         << "</div>" << endl;
}

void Strategy :: Body()
{
    BodyStart();
    BodyContent();
    BodyEnd();
}

void Strategy :: Main()
{
    ReadRoomDetails :: Main();
    HTMLStart();    
    
    Head();
    Body();
    
    HTMLEnd();
}

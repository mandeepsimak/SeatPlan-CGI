#include "roomdetails.h"

RoomDetails :: RoomDetails()
{
    ContentType();
}

void RoomDetails :: Head()
{
    HeadStart();
    Title("Room Details");
    CSS();
    HeadEnd();
}

void RoomDetails :: BodyContent()
{
    cout << "<div id = \"body\" class = \"center\">" << endl;
         
    Header();
    
    cout << "<div id = \"content\" class = \"content\">" << endl
         
         
         
         << "</div>" << endl
         << "</div>" << endl;
}

void RoomDetails :: Body()
{
    BodyStart();
    BodyContent();
    BodyEnd();
}


void RoomDetails :: Main()
{
    HTMLStart();    
    
    Head();
    Body();
    
    HTMLEnd();
}

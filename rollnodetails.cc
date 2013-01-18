#include "rollnodetails.h"

RollNoDetails :: RollNoDetails()
{
    ContentType();
}

void RollNoDetails :: Head()
{
    HeadStart();
    Title("Branch Details");
    CSS();
    HeadEnd();
}

void RollNoDetails :: BodyContent()
{
    cout << "<div id = \"body\" class = \"center\">" << endl;
         
    Header();
    
    cout << "<div id = \"content\" class = \"content\">" << endl
         
         
         
         << "</div>" << endl
         << "</div>" << endl;
}

void RollNoDetails :: Body()
{
    BodyStart();
    BodyContent();
    BodyEnd();
}


void RollNoDetails :: Main()
{
    HTMLStart();    
    
    Head();
    Body();
    
    HTMLEnd();
}

#include "home.h"

Home :: Home()
{
    ContentType();
}

void Home :: Head()
{
    HeadStart();
    Title("Home");
    CSS();
    HeadEnd();
}

void Home :: Javascript()
{

}

void Home :: BodyContent()
{
    cout << "<div id = \"body\" class = \"center\">" << endl;
         
    Header();
    
    cout << "<div id = \"content\" class = \"content\">" << endl
         << "<div class = \"right\"> "
         << "<form name=\"input\" action=\"branchdetails.html \" method=\"post\">"
         << "<input type=\"submit\" value=\"Start\">"
         << "</form>"
         << "</div>" << endl
         << "</div>" << endl
         << "</div>" << endl;
}

void Home :: Body()
{
    BodyStart();
    BodyContent();
    BodyEnd();
}

void Home :: Main()
{
    HTMLStart();    
    
    Head();
    Body();
    
    HTMLEnd();
}

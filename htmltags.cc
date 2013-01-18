#include "htmltags.h"

void HTMLTags :: ContentType()
{
    cout << "Content-type:text/html\n\n";
}

void HTMLTags :: HTMLStart()
{
    cout << "<html>" << endl;
}

void HTMLTags :: HTMLEnd()
{
    cout << "</html>" << endl;
}

void HTMLTags :: HeadStart()
{
    cout << "<head>" << endl;
}

void HTMLTags :: HeadEnd()
{
    cout << "</head>" << endl;
}

void HTMLTags :: BodyStart()
{
    cout << "<body align = \"center\">" << endl;
}

void HTMLTags :: BodyEnd()
{
    cout << "</body>" << endl;
}

void HTMLTags :: Title(string title)
{
    ProjectName = "BeSeated";
    cout << "<title>" << ProjectName << ": " << title << "</title>";
}

void HTMLTags :: CSS()
{
    cout << "<link rel=\"stylesheet\" type=\"text/css\" href=\"home.css\">" 
         << endl;
}


void HTMLTags :: Header()
{
    cout << "<div id = \"header\" >" << endl
//         << "<h1><a href=\"http://localhost/~mandy/cgi-bin/SP/home.html\"> BeSeated </h1></a>" << endl
         << "<h1> BeSeated </h1>" << endl
         << "<div id = \"image\">" << endl
         << "<img src=\"../../SeatPlan/images/image.jpg\" "
         << "width=\"100%\" height=\"200\" alt=\"some_text\">" << endl
         << "</div>" << endl
         << "</div>" << endl;
}

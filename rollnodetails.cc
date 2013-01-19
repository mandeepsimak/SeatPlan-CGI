#include "rollnodetails.h"

RollNoDetails :: RollNoDetails()
{
    ContentType();
}

void RollNoDetails :: Head()
{
    HeadStart();
    Title("RollNo Details");
    CSS();
    HeadEnd();
}

void RollNoDetails :: BodyContent()
{
    cout << "<div id = \"body\" class = \"center\">" << endl;
         
    Header();
    
    cout << "<div id = \"content\" class = \"content\">" << endl
         
         << "<br> Total Branches : " << totalBranches
         << "<br> Branch Name <br>";
         
    for(i = 0; i < totalBranches; i++)
    {
        cout << branchName[i] << "<br>";
    }     
         
    cout << "</div>" << endl
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
    ReadBranchDetails :: Main();
    
    HTMLStart();    
    
    Head();
    Body();
    
    HTMLEnd();
}


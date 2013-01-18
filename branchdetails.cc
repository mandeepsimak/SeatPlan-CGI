#include "branchdetails.h"

BranchDetails :: BranchDetails()
{
    ContentType();
}

void BranchDetails :: Head()
{
    HeadStart();
    Title("Branch Details");
    CSS();
    HeadEnd();
}

void BranchDetails :: BodyContent()
{
    cout << "<div id = \"body\" class = \"center\">" << endl;
         
    Header();
    
    cout << "<div id = \"content\" class = \"content\">" << endl
         
         // Input fields
         << "<h3>Enter Branch Details</h3></br> " << endl
         
         
         << "</div>" << endl
         << "</div>" << endl;
}

void BranchDetails :: Body()
{
    BodyStart();
    BodyContent();
    BodyEnd();
}


void BranchDetails :: Main()
{
    HTMLStart();    
    
    Head();
    Body();
    
    HTMLEnd();
}

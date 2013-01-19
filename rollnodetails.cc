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
         
         << "<br> <h3> Fill Roll No Details</h3> <br>"
         
         << "<form name=\"rollnodetails\" action=\" \" method=\"post\">"         
         
         << "<table align = \"center\" cellpadding=\"5\" >"
         
         << "<tr>"
         << "<th> Branch Name </th>"
         << "<th> Subject Code </th>"
         << "<th> Prefix </th>"
         << "<th> Start Roll No. </th>"
         << "<th> End Roll No </th>"
         << "<th> Not Included </th>"
         << "<tr>";
         
    for(i = 0; i < totalBranches; i++)
    {
        for(j = 0; j < totalSubjects[i]; j++)
        {
            k = j + 1;
            cout << "<tr>";
            cout << "<td>" << branchName[i] << "</td>"
                 << "<td>" << subjectCode[i][j] << "</td>";
            
            cout << "<td><input type=\"text\" name=\"" << prefix << k << "\">"
                 << "</td>"
                 << "<td><input type=\"text\" name=\"" << start_rollno << k << "\">"
                 << "</td>"
                 << "<td><input type=\"text\" name=\"" << end_rollno << k << "\">"
                 << "</td>"
                 << "<td><input type=\"text\" name=\"" << not_included << k << "\">"
                 << "</td>";
            
            cout << "</tr>";
        } 
    }     
    
    cout << "</table>";
    
    cout << "<br><input type=\"submit\" value=\"Next\">";
    
    cout << "</form>";
     
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


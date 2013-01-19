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
         
         << "<pre>"
         
         // Input fields
         << "<h3><br><br>Enter Branch Details</h3></br> " << endl
         
         << "<form name=\"branch\" action=\"rollnodetails.html\" method=\"post\">"
         
         << "Total Branches <select name=\"TotalBranches\">";
         
    for(i = 1; i <= 10; i++)
    {
         cout << "<option value=\""
              << i << "\" > "
              << i << "</option>";
    }
    
    cout << "</select>"
         << "<br><br>"
         
         << "<table align = \"center\" cellpadding=\"5\" >"
         
         << "<tr>"
         
         << "<th>Branch Name</th>"
         << "<th>Total Subjects</th>"
         << "<th>Subject Name</th>"
         << "<th>Subject Code</th>"
         
         << "</tr>";
//         << "<br><br>"
    for(j = 1; j <= 10; j++)
    {     
        cout << "<tr>"
             << "<td>"
             << "<input type=\"text\" name=\"" << branch_name << j << "\">"
             << "</td>"
             
             << "<td>"
             << "<select name=\"" << total_subjects << j << "\">";
             
         
        for(i = 1; i <= 3; i++)
        {
             cout << "<option value=\""
                  << i << "\" > "
                  << i << "</option>";
        }
        cout << "</select>  "
             << "</td>"
             
             << "<td>"
             << "<input type=\"text\" name=\"" << subject_name << j << "\">"
             << "</td>"
             
             << "<td>"
             << "<input type=\"text\" name=\"" << subject_code << j << "\">"
             << "</td>"
             
             << "</tr>";
//             << "<br><br>";
    }   
    
    cout << "</table>"
         << "<br><br>";
    
    cout << "<input type=\"submit\" value=\"NEXT\">"
         
         << "</form>"
         
         << "</pre>"
         
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

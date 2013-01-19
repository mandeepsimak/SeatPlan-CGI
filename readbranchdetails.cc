#include "rollnodetails.h"

ReadBranchDetails :: ReadBranchDetails()
{
    branch_name = "BranchName";
    total_subjects = "TotalSubjects";
    subject_code = "SubjectCode";
    subject_name = "SubjectName";
    total_branches = "TotalBranches";
}

void ReadBranchDetails :: readBranchDetails()
{    
    fi = formData.getElement(total_branches);  

    if( !fi->isEmpty() && fi != (*formData).end()) 
    {  
        temp = **fi;
        totalBranches = atoi(temp.c_str());  
    }
    
    for(i = 0; i < totalBranches; i++)
    {  
        branchName[i] = readField(branch_name, i);
        totalSubjects[i] = atoi(readField(total_subjects, i).c_str());
        subjectcode[i] = readField(subject_code, i);
        subjectname[i] = readField(subject_name, i);   
    }
    
}

string ReadBranchDetails :: readField(string fieldname, int i)
{
    std::stringstream no;
    string result;
    no << (i+1);
    temp = fieldname + no.str();
    fi = formData.getElement(temp);  
    if( !fi->isEmpty() &&fi != (*formData).end()) 
    {  
        result = **fi;  
    }
    else
    {
        result = " "; 
    }
    return result;
}

void ReadBranchDetails :: splitSujects()
{

}

void ReadBranchDetails :: writeBranchDetails()
{
    outfile.open("BranchDetails.in");
    
    outfile << totalBranches << endl;
    
//    for(i = 0; i < 10; i++)
//    {
//        outfile << branchName[i] << endl;
//    }
    
    outfile.close();
}

void ReadBranchDetails :: Main()
{
    readBranchDetails();
    writeBranchDetails();
}

#include "htmltags.h"

class ReadBranchDetails : public HTMLTags
{
    protected:
        // for branch details
        int totalBranches, totalSubjects[MIN_SIZE];
        string branchName[MIN_SIZE], subjectName[MIN_SIZE][MIN_SIZE],
               subjectCode[MIN_SIZE][MIN_SIZE];
        // for splitSujects 
        string subjectcode[MIN_SIZE], subjectname[MIN_SIZE];
        
        // temp string
        string temp;
        
        // cgicc variables nd objts
        Cgicc formData;
        form_iterator fi;

    public:
        ReadBranchDetails();
        string readField(string, int);
        void readBranchDetails();
        void writeBranchDetails();
        void splitSujects();
        void Main();
};

class RollNoDetails : public ReadBranchDetails
{    
    public:
        RollNoDetails();
        void Head();
        void Javascript();
        void Body();
        void BodyContent();
        void Main();
};


#include "htmltags.h"

class BranchDetails : public HTMLTags
{
    protected:
        string branch_name, total_subjects, subject_code, subject_name,
               total_branches;
    
    public:
        BranchDetails();
        void Head();
        void Javascript();
        void Body();
        void BodyContent();
        void Main();
};

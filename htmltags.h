#include "header.h"

// Base class containong Basic Html Tags and methods
class HTMLTags
{
    protected:
    
    string ProjectName;
        
    public:
    
        void HTMLStart();
        void HTMLEnd();
        void HeadStart();
        void HeadEnd();
        void BodyStart();
        void BodyEnd();
        void Title(string title);
        void ContentType();
        void Header();
        void CSS();
};
